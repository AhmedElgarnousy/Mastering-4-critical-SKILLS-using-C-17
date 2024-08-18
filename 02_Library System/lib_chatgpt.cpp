#include <iostream>
#include <algorithm> // for sort algorithm
#include <string>

using namespace std;

// global constants
const int maxBooks {20};
const int maxUsers {10};

struct book {
    int id;
    string name;
    int quantity;
    string borrowed_users[maxUsers];
    int borrowed_users_quantity = 0; // number of borrowed users

    void read_book() {
        cout << "Enter book info (id, name, quantity): ";
        cin >> id;
        cin.ignore(); // Ignore leftover newline
        getline(cin, name);
        cin >> quantity;
    }
};

struct user {
    string name;
    int id;
    string borrowed_books[maxBooks];
    int borrowed_books_quantity = 0; // number of borrowed books

    void read_user() {
        cout << "Enter user name and ID: ";
        cin.ignore(); // Ignore leftover newline
        getline(cin, name);
        cin >> id;
    }
};

// Comparison functions
bool compare_name(const book& a, const book& b) {
    return a.name < b.name;
}

bool compare_id(const book& a, const book& b) {
    return a.id < b.id;
}

struct librarySystem {
    user users[maxUsers];
    book books[maxBooks];
    int added_users = 0; // number of users
    int added_books = 0; // number of books  

    // Utilities 
    bool hasPrefix(const string& prefix, const string& word) const {
        return word.find(prefix) == 0;
    }

    bool userExist(const string& username) const {
        for (int i = 0; i < added_users; ++i) {
            if (users[i].name == username) {
                return true;
            }
        }
        return false;
    }

    bool bookExist(const string& bookname) const {
        for (int i = 0; i < added_books; ++i) {
            if (books[i].name == bookname) {
                return true;
            }
        }
        return false;
    }

    // Operations 
    int menu() {
        int userInput;
        cout
            << "1) Add book\n"
            << "2) Search books by prefix\n"
            << "3) Print who borrowed book by name\n"
            << "4) Print library by ID\n"
            << "5) Print library by name\n"
            << "6) Add user\n"
            << "7) User borrow book\n"
            << "8) User return book\n"
            << "9) Print users\n"
            << "10) Exit\n";

        cout << "Enter your menu choice [1 - 10]: ";
        cin >> userInput;

        if (userInput < 1 || userInput > 10) {
            cout << "Invalid choice\n";
            return 0;
        }
        cout << "\n";
        return userInput;
    }

    void add_book() {
        if (added_books < maxBooks) {
            books[added_books++].read_book();
        } else {
            cout << "Book limit reached\n";
        }
    }

    void search_book_by_prefix() const {
        string prefix;
        cout << "Enter book name prefix: ";
        cin >> ws; // Ignore any leading whitespace
        getline(cin, prefix);
        bool found = false;

        for (int i = 0; i < added_books; ++i) {
            if (hasPrefix(prefix, books[i].name)) {
                cout << books[i].name << "\n";
                found = true;
            }
        }

        if (!found) {
            cout << "No books match this prefix\n\n";
        }
    }

    void print_who_borrowed_book_by_name() const {
        string enteredBook;
        cout << "Enter the book name: ";
        cin >> ws;
        getline(cin, enteredBook);

        for (int i = 0; i < added_books; ++i) {
            if (enteredBook == books[i].name) {
                if (books[i].borrowed_users_quantity > 0) {
                    for (int j = 0; j < books[i].borrowed_users_quantity; ++j) {
                        cout << books[i].borrowed_users[j] << "\n";
                    }
                } else {
                    cout << "No users have borrowed this book.\n";
                }
                return;
            }
        }
        cout << "Book not found\n";
    }

    void print_library_by_name() {
        sort(books, books + added_books, compare_name);
        for (int i = 0; i < added_books; ++i) {
            cout << "ID = " << books[i].id << ", Name = " << books[i].name << ", Quantity = " << books[i].quantity << "\n";
        }
    }

    void print_library_by_id() {
        sort(books, books + added_books, compare_id);
        for (int i = 0; i < added_books; ++i) {
            cout << "ID = " << books[i].id << ", Name = " << books[i].name << ", Quantity = " << books[i].quantity << "\n";
        }
    }

    void add_user() {
        if (added_users < maxUsers) {
            users[added_users++].read_user();
        } else {
            cout << "User limit reached\n";
        }
    }

    void user_borrow_book() {
        string enteredName, enteredBook;
        cout << "Enter user name and book name: ";
        cin >> ws;
        getline(cin, enteredName);
        getline(cin, enteredBook);

        if (userExist(enteredName) && bookExist(enteredBook)) {
            for (int i = 0; i < added_users; ++i) {
                if (enteredName == users[i].name) {
                    if (users[i].borrowed_books_quantity < maxBooks) {
                        users[i].borrowed_books[users[i].borrowed_books_quantity++] = enteredBook;
                        for (int j = 0; j < added_books; ++j) {
                            if (books[j].name == enteredBook) {
                                if (books[j].quantity > 0) {
                                    books[j].quantity--;
                                    books[j].borrowed_users[books[j].borrowed_users_quantity++] = enteredName;
                                    return;
                                } else {
                                    cout << "No copies of the book are available.\n";
                                    return;
                                }
                            }
                        }
                    } else {
                        cout << "User has reached the limit of borrowed books.\n";
                    }
                    return;
                }
            }
        } else {
            cout << "User or book does not exist.\n";
        }
    }

    void user_return_book() {
        string usrName, bookName;
        cout << "Enter user name and book name: ";
        cin >> ws;
        getline(cin, usrName);
        getline(cin, bookName);

        for (int i = 0; i < added_users; ++i) {
            if (usrName == users[i].name) {
                for (int j = 0; j < users[i].borrowed_books_quantity; ++j) {
                    if (users[i].borrowed_books[j] == bookName) {
                        for (int k = 0; k < added_books; ++k) {
                            if (bookName == books[k].name) {
                                // Remove book from user's borrowed books
                                users[i].borrowed_books[j] = users[i].borrowed_books[--users[i].borrowed_books_quantity];
                                // Increase book quantity and remove user from the list of borrowed users
                                books[k].quantity++;
                                for (int l = 0; l < books[k].borrowed_users_quantity; ++l) {
                                    if (books[k].borrowed_users[l] == usrName) {
                                        books[k].borrowed_users[l] = books[k].borrowed_users[--books[k].borrowed_users_quantity];
                                        return;
                                    }
                                }
                                return;
                            }
                        }
                        cout << "Book not found in the library.\n";
                        return;
                    }
                }
                cout << "User did not borrow this book.\n";
                return;
            }
        }
        cout << "User not found.\n";
    }

    void print_users() const {
        if (added_users == 0) {
            cout << "There are no users.\n";
            return;
        }

        for (int i = 0; i < added_users; ++i) {
            cout << "User: " << users[i].name << ", ID: " << users[i].id << ", Borrowed books: ";
            for (int j = 0; j < users[i].borrowed_books_quantity; ++j) {
                cout << users[i].borrowed_books[j] << " ";
            }
            cout << "\n";
        }
    }

    void run() {
        while (true) {
            int choice = menu();

            switch (choice) {
                case 1:
                    add_book();
                    break;
                case 2:
                    search_book_by_prefix();
                    break;
                case 3:
                    print_who_borrowed_book_by_name();
                    break;
                case 4:
                    print_library_by_id();
                    break;
                case 5:
                    print_library_by_name();
                    break;
                case 6:
                    add_user();
                    break;
                case 7:
                    user_borrow_book();
                    break;
                case 8:
                    user_return_book();
                    break;
                case 9:
                    print_users();
                    break;
                case 10:
                    cout << "Program Exit\n";
                    return;
                default:
                    cout << "Invalid choice\n";
            }
        }
    }
};

// Program entry point
int main() {
    librarySystem AlexLibrary;
    AlexLibrary.run();
    return 0;
}
