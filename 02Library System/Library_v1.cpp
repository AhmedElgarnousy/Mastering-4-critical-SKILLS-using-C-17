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
};

struct User 
{
    string user_name;
    double user_id;  
    string borrowed_books[MAX_BOOKS];
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
        /*
        // print the data
        for(int i = 0; i < books_len ;  i++) {
                  cout<<"id = "<<books[i].book_id <<" name = "<< 
                            books[i].book_name <<" total_quantity " <<
                            books[i].quantity <<" total_borrowed " << 0<<"\n";
        }
        */
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
            // cout<<Copy_BookIds[i]<<"\n";
            // cout<<Copy_IdsIdx[i]<<"\n";
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
                books[Copy_IdsIdx[i]].quantity <<" total_borrowed " <<borrowed<<"\n";
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
            // cout<< Copy_BookNames[i] <<"\n";
            // cout<< Copy_BooksNamesIdxs[i] <<"\n";
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
                books[Copy_BooksNamesIdxs[i]].quantity <<" total_borrowed " << borrowed <<"\n";
        }
        
    }

    void add_user()  // choice 6
    {
        users_len ++;
        cout<< "Enter user name & national id: ";
        cin>>users[users_len].user_name>>users[users_len].user_id;
    }
    
    void user_borrow_book()  // choice 7
    {
        borrowed_len ++;
        string enteredUserName, entertedBook;

        cout<< "Enter user name and book name: ";
        cin>>enteredUserName>>entertedBook;


        // loop to insert borrowed user
        for(int i = 0; i <= books_len; i++){
            if(enteredUserName == users[i].user_name) {
                users[i].borrowed_books[0]; // borrowed_len
            } 
        }
        // loop to insert borrowed user
        for(int i = 0; i <= books_len; i++){
            if(entertedBook == books[i].book_name) {
                books[i].borrowed_users[0]; // borrowed_len
            } 
        }

        // cin>>books[borrowed_len].borrowed_users[borrowed_len]>>users[borrowed_len].borrowed_books[borrowed_len];

    }
    
    void user_return_book()   // choice 8
    {
        borrowed_len --;
        cout<< "Enter user name and book name: ";    
    }
    
    void print_users()   // choice 9
    {
        // print the user data
        for(int i = 0; i <= users_len ;  i++) {
            cout<< "user "<<users[i].user_name<< " id " << users[i].user_id << " borrowed books ids: "; 

            for(int j = 0; j <= borrowed_len ; j++) 
                cout<<users[j].borrowed_books[j]<<" ";
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
    // string name = "math";
    // cout<<name[0]<<" " <<name[1];

  return 0;
}
