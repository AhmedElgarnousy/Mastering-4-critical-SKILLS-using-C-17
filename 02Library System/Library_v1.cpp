/********************************************************************
                            * Library System  v1 *
********************************************************************/
#include <iostream>
using namespace std;


/********************************************************************
                         * Global Variables *
********************************************************************/
const int MAX_BOOKS = 100;
const int MAX_USERS = 20;



/********************************************************************
                           * Strcutures *
********************************************************************/
struct Book {
  string book_name;
  int book_id;
  int quantity;

  int borrowedUsers_len = 0; 
  string borrowed_users[10]; // 10 : MAX_BORROWED_USERS
};

struct User {
  string user_name;
  int user_id;

  int borrowedBooks_len = 0; 
  string borrowed_books[10]; // 10 : MAX_BORROWED_BOOKS
};

struct Library_System {
    // Library_System library_system(){ // constructor
    // }

    int books_len = -1;
    int users_len = -1;

    Book books[MAX_BOOKS];
    User users[MAX_USERS];

    // book methods
    void add_book() {
      books_len ++;
      cout<<"Enter Book info: id & name & total quantity: ";
      cin>>books[books_len].book_id >> books[books_len].book_name >> books[books_len].quantity;
    }
    
    void search_books_by_prefix( ) {
        string prefix;
        cout<<"Enter book name prefix: ";
        cin>>prefix;

         for(int i = 0; i < books_len; ++i) {
           for(int strIdx = 0; strIdx < prefix.size(); strIdx++) {
            if(prefix[strIdx] == books[i].book_name[strIdx] && strIdx == (int)prefix.size() - 1) {
                cout<< books[i].book_name<<"\n";
            }
            else{
                cout<<"No Books with such prefix \n";
            }
           }
        }
    }
    
    void print_who_borrowed_book_by_name() {
        string bookName;
        cout<<"Enter book name prefix: ";
        cin>>bookName;
    }
    
    void print_library_by_id() {
        // take a copy of array of books ids 
    int Copy_BookIds[books_len];
    int small_id;
        for(int i = 0; i <=  books_len; i ++) {
            Copy_BookIds[i] = books[i].book_id;
            // cout<<Copy_BookIds[i]<<"\n";
        }

        for(int i = 0 ; i <= books_len; i++) {

             small_id = Copy_BookIds[i];
            int small_id_idx;
            for(int j = 1; j <=  books_len; j++ ) {
                if(!(small_id == 0 || Copy_BookIds[j]  == 0)) {
                    if(small_id >= Copy_BookIds[j]) {
                        small_id = Copy_BookIds[j];
                        small_id_idx = j;
                    }
                }
            }
            cout<<"id = "<<books[small_id_idx].book_id <<" name = "<<books[small_id_idx].book_name<<" total_quantity "<<books[small_id_idx].quantity<<" total_borrowed "<<borrowed<<"\n";
            Copy_BookIds[small_id_idx] = 0;

        }

    }
    
    void print_library_by_name() {


    }

    // user methods
    void add_user() {

        cout<< "Enter user name & national id: ";
        cin>>users[users_len++].user_name>>users[users_len++].user_id;

    }
    
    void user_borrow_book() {
        cout<< "Enter user name and book name: ";

        // borrowed ++;


    }
    
    void user_return_book() {
        cout<< "Enter user name and book name: ";
        
        // borrowed --;
    }
    
    void print_users() {
       cout<< "user"<<""<< "id" <<""<< " borrowed books ids: "<<""<<"\n"; 
    
    }

    void Exit(){}

    int menu() {
        int choice;
        cout<<
            "Library Menu:  \n"<<
            "1) add_book\n"<<
            "2) search_books_by_prefix\n"<<
            "3) Print_who_borrowed_book_by_name\n"<<
            "4) print_library_by_id \n"<<
            "5) print_library_by_name \n"<<
            "6) add_user\n"<<
            "7) user_borrow_book\n"<<
            "8) user_return_book\n"<<
            "9) print_user\n"<<
            "10) Exit\n";

        cout<<"Enter your choice [1 - 10]: ";
        cin>>choice;
        cout<<"\n\n";

        return choice;
    }

    void run(){
        while(1)
        {
            int user_choice = menu();

            if( ! (1<= user_choice  && user_choice <= 10) )
            {
                cout<<"Invalid user choice!!!\n";
            }
            else if(user_choice == 1)  // done alhamdollah
                add_book(); 
            else if(user_choice == 2)
                search_books_by_prefix();   // done alhamdollah
            else if(user_choice == 3)
                print_who_borrowed_book_by_name();
            else if(user_choice == 4)
                print_library_by_id();
            else if(user_choice == 5)
                print_library_by_name();
            else if(user_choice == 6)
                add_user();
            else if(user_choice == 7)
                user_borrow_book();
            else if(user_choice == 8)
                user_return_book();
            else if(user_choice == 9)
                print_users();
            else if(user_choice == 10) 
                Exit();
        }
    }
};


int main()
{
    Library_System my_library;
    my_library.run();

  return 0;
}
