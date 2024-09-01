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
int borrowed = 0; 
string borrowed_users[10]; // 10 : MAX_BORROWED_USERS

struct Book 
{
    string book_name;
    int book_id;
    int quantity;
    string borrowed_users[MAX_USERS];
    int total_borrowed = 0;
};

struct User 
{
    string user_name;
    double user_id;  
    string borrowed_books[MAX_BOOKS];
    int  borrowedBooksIdx = -1;
};

struct Library_System 
{
    // Library_System library_system(){ // constructor
    // }

    int books_len = -1;
    int users_len = -1;
    int borrowed_len = -1;

    Book books[MAX_BOOKS];
    User users[MAX_USERS];

    // book methods
    void add_book() {  // choice 1
        books_len ++;
        cout<<"Enter Book info: id & name & total quantity: ";
        cin>>books[books_len].book_id >> books[books_len].book_name >> books[books_len].quantity;
    }
    
    void search_books_by_prefix() // choice 2 
    {
        string prefix;
        cout<<"Enter book name prefix: ";
        cin>>prefix;

        int NoPrefixCheck = 0;
        for(int i = 0; i <= books_len; i++) 
        {
            for(int strIdx = 0; strIdx <= (int)prefix.size(); ++ strIdx) 
            {
                if(prefix[strIdx] == books[i].book_name[strIdx])  // check each string
                {
                    if(strIdx == (int)prefix.size() - 1) {
                        cout<< books[i].book_name << "\n";
                        NoPrefixCheck ++;
                    }
                } 
                else {
                    break;
                }
            }
            if(i == books_len  ) // the last iterartion and no prefix
            {  
                if(NoPrefixCheck == 0) 
                    cout<<"No Books with such prefix \n";
            }
        }
    }
    
    void print_who_borrowed_book_by_name() { // choice 3
        string bookName;
        cout<<"Enter book name : ";
        cin>>bookName;

        // loop to insert borrowed user
        for(int i = 0; i <= books_len; i++){
            if(bookName == books[i].book_name) {
                for(int j = 0; j <= borrowed_len; j++) {
                    cout<<books[i].borrowed_users[0]<<"\n";  // j
                    cout<<"GDB: enter borrowed user for loop\n";
                }
            } 
        }
    }
    
    void print_library_by_id() {  // choice 4
        int Copy_BookIds[MAX_BOOKS]; // take a copy of array of books ids 
        int Copy_IdsIdx[MAX_BOOKS];
        int temp_id;
        int temp_id_idx;

        for(int i = 0; i <=  books_len; i ++) 
        {
            Copy_BookIds[i] = books[i].book_id;
            Copy_IdsIdx[i] = i;
        }

        for(int i = 0 ; i <= books_len; i++) 
        {
            for(int j = 0; j <=  books_len; j++) 
            {
                if(Copy_BookIds[i] < Copy_BookIds[j]  ) 
                {
                    // Swap indices
                    temp_id_idx = Copy_IdsIdx[j];
                    Copy_IdsIdx[j] = Copy_IdsIdx[i];
                    Copy_IdsIdx[i] = temp_id_idx;
                    
                      // Swap book ids
                    temp_id = Copy_BookIds[j]  ;
                    Copy_BookIds[j] = Copy_BookIds[i] ;
                    Copy_BookIds[i] = temp_id ;
                }
            }
        }
    
        // print the library with the sorted array of indices
        for(int i = 0; i <= books_len ;  i++) {
            cout<<"id = "<<books[Copy_IdsIdx[i]].book_id <<" name = "<<   
                books[Copy_IdsIdx[i]].book_name <<" total_quantity " <<
                books[Copy_IdsIdx[i]].quantity <<" total_borrowed " <<books[Copy_IdsIdx[i]].total_borrowed<<"\n";
        }
    }
    
    void print_library_by_name()  // choice 5
    {
        string Copy_BookNames[MAX_BOOKS]; // take a copy of array of book names 
        int Copy_BooksNamesIdxs[MAX_BOOKS];
        string temp_book;
        int temp_book_idx;

        // copy book names 
        for(int i = 0; i <=  books_len; i++) 
        {
            Copy_BookNames[i] = books[i].book_name;
            Copy_BooksNamesIdxs[i] = i;
        }

        for(int i = 0 ; i <= books_len; i++) 
        {
            for(int j = 0; j <=  books_len; j++) 
            {
                if(Copy_BookNames[i] < Copy_BookNames[j]  ) 
                {
                    // Swap indices
                    temp_book_idx = Copy_BooksNamesIdxs[j];
                    Copy_BooksNamesIdxs[j] = Copy_BooksNamesIdxs[i];
                    Copy_BooksNamesIdxs[i] = temp_book_idx;
                    
                    // Swap book ids
                    temp_book = Copy_BookNames[j]  ;
                    Copy_BookNames[j] = Copy_BookNames[i] ;
                    Copy_BookNames[i] = temp_book ;
                }
            }
        }
        // print the library with the sorted array of indices
        for(int i = 0; i <= books_len ;  i++) {
            cout<<"id = "<<books[Copy_BooksNamesIdxs[i]].book_id <<" name = "<<   
                books[Copy_BooksNamesIdxs[i]].book_name <<" total_quantity " <<
                books[Copy_BooksNamesIdxs[i]].quantity <<" total_borrowed " << books[Copy_BooksNamesIdxs[i]].total_borrowed<<"\n";
        }        
    }

    void add_user()  // choice 6
    {
        users_len ++;
        cout<< "Enter user name & national id: ";
        cin>>users[users_len].user_name>>users[users_len].user_id;
    }
    
    int user_borrow_book()  // choice 7
    {
        int borBookIdx = 0, borUserIdx = 0;
        string enteredUserName, entertedBook;

        cout<< "Enter user name and book name: ";
        cin>>enteredUserName>>entertedBook;

         // loop to insert entered user in books array
        for(int i = 0; i <= books_len; i++)
        {
            if(entertedBook == books[i].book_name) {
                borBookIdx =  books[i].total_borrowed;
                books[i].total_borrowed ++;       //total_borrowed initially = 0
                books[i].borrowed_users[borBookIdx] = enteredUserName;
                break;  
            } 
            else
            {
                if(i == books_len) { // Make sure that name does not exist in all array 
                    cout<< "Sorry there is no user called "<<entertedBook<<"\n";
                    return 0;
                }
            }
        }
        // loop to insert entered book in users array
        for(int i = 0; i <= users_len; i++)
        {
            if(enteredUserName == users[i].user_name) {

                users[i].borrowedBooksIdx ++;
                borUserIdx = users[i].borrowedBooksIdx;
                users[i].borrowed_books[borUserIdx] = entertedBook;
                break;  
            }
            else
            {
                 if(i == users_len) { // Make sure that name does not exist in all array 
                    cout<< "Sorry there is no user called "<<enteredUserName<<"\n";
                    return 0;
                }
            }
        }
        return 1;
    }
 /*
    int user_return_book()   // choice 8
    {
        string enteredUserName, enteredBook;

        // int DelDoneCheck = 0;
         int userIndex = -1;
        int bookIndex = -1;
        cout<< "Enter user name and book name: ";
        cin>>enteredUserName>>enteredBook;

        // loop to exclude entered user in books array

        // Find the user by name
        for (int i = 0; i <= users_len; i++) {
            if (enteredUserName == users[i].user_name) {
                userIndex = i;
                break;
            }
        }
        // Find the book by name
        for (int i = 0; i <= books_len; i++) {
            if (enteredBook == books[i].book_name) {
                bookIndex = i;
                break;
            }
        }

        if (userIndex == -1) {
            cout << "Sorry, there is no user called " << enteredUserName << "\n";
            return 0;
        }

        if (bookIndex == -1) {
            cout << "Sorry, there is no book called " << enteredBook << "\n";
            return 0;
        }


        // loop to exclude entered user in books array
        for(int i = 0; i <= books_len; i++) 
        {
            
                for(int j = 0;  i <= books[i].total_borrowed; j++)
                {
                        // shift the entered user to exclude it from the array
                        for(int shift = j; shift == (books[i].total_borrowed + 1); shift++) 
                        {
                            string swap;
                            swap = books[i].borrowed_users[shift];
                            books[i].borrowed_users[shift] = books[i].borrowed_users[shift+1];
                            books[i].borrowed_users[shift+1] = swap;
                        }
                        books[i].total_borrowed --;
                }
        }

        
        
        // loop to exclude entered book in users array
        for(int i = 0; i <= users_len; i++) 
        {
                for(int j = 0;  i <= users[i].borrowedBooksIdx; j++)
                {
                        // shift the entered user to exclude it from the array
                        for(int shift = j; shift == (users[i].borrowedBooksIdx + 1); shift++) 
                        {
                            string swap;
                            swap = users[i].borrowed_books[shift];
                            users[i].borrowed_books[shift] =  users[i].borrowed_books[shift+1];
                            users[i].borrowed_books[shift+1] = swap;
                        }
                        users[i].borrowedBooksIdx --;
                }
        }
  
        return 1;
    }
 */   
    int user_return_book()   // choice 8
    {
        string enteredUserName, enteredBook;

        cout << "Enter user name and book name: ";
        cin >> enteredUserName >> enteredBook;

        int bookIndex = -1;
        int userIndex = -1;

        // Find the book by name
        for (int i = 0; i <= books_len; i++) {
            if (enteredBook == books[i].book_name) {
                bookIndex = i;
                break;
            }
        }

        // Find the user by name
        for (int i = 0; i <= users_len; i++) {
            if (enteredUserName == users[i].user_name) {
                userIndex = i;
                break;
            }
        }

        if (bookIndex == -1) {
            cout << "Sorry, there is no book called " << enteredBook << "\n";
            return 0;
        }

        if (userIndex == -1) {
            cout << "Sorry, there is no user called " << enteredUserName << "\n";
            return 0;
        }

        // Check if the user has borrowed the book
        int foundBorrowedBookIndex = -1;
        for (int i = 0; i <= users[userIndex].borrowedBooksIdx; i++) {
            if (enteredBook == users[userIndex].borrowed_books[i]) {
                foundBorrowedBookIndex = i;
                break;
            }
        }

        if (foundBorrowedBookIndex == -1) {
            cout << "The user " << enteredUserName << " has not borrowed the book " << enteredBook << "\n";
            return 0;
        }

        // Return the book by updating the arrays
        // Shift the borrowed_books array to remove the book
        for (int i = foundBorrowedBookIndex; i < users[userIndex].borrowedBooksIdx; i++) {
            users[userIndex].borrowed_books[i] = users[userIndex].borrowed_books[i + 1];
        }
        users[userIndex].borrowedBooksIdx--;

        // Shift the borrowed_users array to remove the user
        for (int i = foundBorrowedBookIndex; i < books[bookIndex].total_borrowed; i++) {
            books[bookIndex].borrowed_users[i] = books[bookIndex].borrowed_users[i + 1];
        }
        books[bookIndex].total_borrowed--;

        cout << "Successfully returned the book: " << enteredBook << "\n";
        return 1;
    }

    void print_users()   // choice 9
    {
        // print the user data
        for(int i = 0; i <= users_len ;  i++) 
        {
            cout<< "user "<<users[i].user_name<< " id " << users[i].user_id << " borrowed books ids: "; 

            for(int j = 0; j <= users[i].borrowedBooksIdx; j++) 
            {
                cout<<users[i].borrowed_books[j]<<" ";
            }
            cout<< "\n"; 
        }
    }

    void Exit()  // choice 10
    {

    }

    int menu() 
    {
        int choice;
        cout<<
            "Library Menu: \n"<<
            "1) add_book \n"<<
            "2) search_books_by_prefix \n"<<
            "3) Print_who_borrowed_book_by_name \n"<<
            "4) print_library_by_id \n"<<
            "5) print_library_by_name \n"<<
            "6) add_user \n"<<
            "7) user_borrow_book \n"<<
            "8) user_return_book \n"<<
            "9) print_user \n"<<
            "10) Exit \n";

        cout<<"Enter your choice [1 - 10]: ";
        cin>>choice;
        cout<<"\n";

        return choice;
    }

    void run() 
    {
        while(1)
        {
            int user_choice = menu();

            if( ! (1<= user_choice  && user_choice <= 10) )
            {
                cout<<"Invalid user choice!!!\n";
            }
            else if(user_choice == 1)  // done alhamdollah
                add_book(); 
            else if(user_choice == 2)        // done alhamdollah
                search_books_by_prefix();   
            else if(user_choice == 3)         // done alhamdollah
                print_who_borrowed_book_by_name();  
            else if(user_choice == 4)            // done alhamdollah
                print_library_by_id();
            else if(user_choice == 5)              // done alhamdollah
                print_library_by_name();       
            else if(user_choice == 6)                // done alhamdollah
                add_user();
            else if(user_choice == 7)                // done alhamdollah
                user_borrow_book(); 
            else if(user_choice == 8)                
                user_return_book();
            else if(user_choice == 9)                // done alhamdollah
                print_users();
            else if(user_choice == 10) 
                Exit();
        }
    }
};


int main()
{
/*
1   
100 math4 3
1
101 math2 5
1   
102 math1 4
1   
103 math3 2
1   
201 prog1 5
1   
201 prog2 3
4
5 

6
mostafa 30301
6
ali 50501
6
noha 70701
6
ashraf 90901

7
mostafa math1
7
mostafa math2
7
mostafa math3
7
ali math1
7
ali math2
7 
noha math1
7 
noha math2

4
9
2
ma
2
pro
2
machine
3
4
9

8
mostafa math1
4
9

*/
    Library_System my_library;
    my_library.run();

    return 0;
}
