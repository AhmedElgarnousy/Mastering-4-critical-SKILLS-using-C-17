#include <iostream>
#include <algorithm> // for sort algo

using namespace std;

// global variables
const int maxBooks {20};
const int maxUsers {10};

struct book
{
    int id; 
    string name;
    int quantity;
    string borrowed_users[maxUsers];
    int borrowed_users_quantity = 0; // len of borrowed users

    void read_book()
    {
        cout<<"Enter book info: id & name & total quantity: ";
        cin>>id>>name>>quantity;
    }
};

struct user
{
    string name;
    int id;
    string borrowed_books[maxBooks];
    int borrowed_books_quantity = 0; // len of borrowed books

    void read_user()
    {
        cout<<"Enter user name & national id: ";
        cin>>name>>id;
    }
};

// comare functions
bool comare_name(book a, book b)
{
    if(a.name != b.name)
        return a.name < b.name;
}
bool comare_id(book a, book b)
{
    if(a.id != b.id)
        return a.id < b.id;
}

struct librarySystem {

    user users[maxUsers];
    book books[maxBooks];

    int added_users = 0; //len of users
    int added_books = 0; //len of books  

    // utilittes 
    bool hasPrefix(string prefix, string word)
    {
        for(int i=0; i < prefix.size(); i++)
        {
            if(word[i] != prefix[i]){
                return 0;
            }
        }
        return 1;
    }
    bool userExist(string usrname)
    {

    }
    bool bookExist(string bookname)
    {

    }
   
    // operations 
    int menu()
    {
        int userInput;
        cout
            <<"1) add_book"<<"\n"
            <<"2) search_books_by_prefix"<<"\n"
            <<"3) print_who_borrowed_book_by_name"<<"\n"
            <<"4) print_library_by_id"<<"\n"
            <<"5) print_library_by_name"<<"\n"
            <<"6) add_user"<<"\n"
            <<"7) user_borrow_book"<<"\n"
            <<"8) user_return_book"<<"\n"
            <<"9) print_users"<<"\n"
            <<"10) Exit"<<"\n";

            cout<<"Enter your menu choice [1 - 10]: ";
            cin>>userInput;

            if(userInput < 1 || userInput > 10)
            {
                cout<<"Invalid choice\n";
                return 0;
            }
            cout<<"\n";
            return userInput;
    }

    void add_book(){
        books[added_books++].read_book();
    }
 
    void search_book_by_prefix()
    {
        string prefix;
        cout<<"Enter book name prefix: ";
        cin>>prefix;
        bool NoPrefix = 1;
        /*
        for(int j=0; j < added_books;j++ )
        {
            for(int i=0; i < prefix.size(); i++)
            {
                if(books[i].name[j] != prefix[j]){
                   break;
                }
                
                if(i+1 == prefix.size())
                {
                    cout<<books[i].name<<"\n";
                    NoPrefix = 0;
                }
            }
        }
        */
        for(int i=0; i < added_books;i++ )
        {
            if (hasPrefix(prefix, books[i].name))
            {
                cout<<books[i].name<<"\n";
                    NoPrefix = 0;
            }
        }
        if(NoPrefix)
        {
            cout<<"no books match with this prefix\n\n";
        }
    }
    
    void print_who_borrowed_book_by_name()
    {
        string enteredBook;
        cout<<"Enter the book name:  ";
        cin>>enteredBook;

        for(int i = 0; i < added_books; i++)
        {
            if(enteredBook == books[i].name)
            {
                for(int j = 0; j<= books[i].borrowed_users_quantity; j++)
                    cout<<books[i].borrowed_users[j]<<"\n"; 
            }
        }
    }
    
    void print_library_by_name()
    {
       /*
        // print first without sorting
       for(int i =0; i < added_books; i++)
        {
            cout<<"id = "<<books[i].id<<" name = "<<books[i].name<<" total_quantity "<<books[i].quantity<<"\n";
        }
       */
       sort(books ,books + added_books,  comare_name);
       for(int i =0; i < added_books; i++)
        {
            cout<<"id = "<<books[i].id<<" name = "<<books[i].name<<" total_quantity "<<books[i].quantity<<"\n";
        }
    }
    
    void print_library_by_id()
    {
       sort(books ,books + added_books,  comare_id);
       
       for(int i =0; i < added_books; i++)
        {
            cout<<"id = "<<books[i].id<<" name = "<<books[i].name<<" total_quantity "<<books[i].quantity<<"\n";
        }
    }
   
    void add_user()
    {
        users[added_users++].read_user();
    }

    void user_borrow_book()
    {
        string enteredName, enteredBook;
        cout<<"Enter user name and book name:  ";
        cin>>enteredName, enteredBook;

        for(int i = 0; i <=  added_users; i++)
        {
            if(enteredName == users[i].name)
            {
                // insert book to user 
                //and increase the borrowed book to the user 
                users[i].borrowed_books[users[i].borrowed_books_quantity++] = enteredBook;
                return;
            }

            // check if user doesn't exist 
            if(i == added_users)
            {
                cout<<"this user doesn't exit\n";
                return;
            }
        }

        // check if the entered book exist
        for(int i =0 ; i <=added_books; i++)
        {
            if(books[i].name == enteredBook)
            {
                books[i].quantity--; // and decreased book quantity 
                return;
            }

            if(i == added_books)
            {
                cout<<"the entered book does't exist\n";
                return;
            }
        }
    }

    void user_return_book()
    {
        string ursName, bookName;
        cout<<"Enter user name and book name: ";
     
        // check if there is user
        if(!added_users)
        {
            cout<<"there is no users\n";
            return;
        }
        // check entered user exist
        for(int i = 0; i < added_users; i++)
        {
            if(ursName == users[i].name)
            {
                // data integrity
                // drecrease borrowed book variable
                users[i].borrowed_books_quantity--;
            }
            if(i+1 == added_users)
            {
                cout<<"entered user does't exist\n";
                return;
            }
        }

        // check user borrowed this book
        for(int i = 0; i < added_books; i++)
        {
            if(bookName == books[i].name)
            { 
                // remove book name from list
                
                // data integrity, increased book quantity
                books[i].quantity++;
            }
            if(i+1 == added_books)
            {
                cout<<"entered book does't exist\n";
                return;
            }
        }
    }

    void print_users()
    {
        if(!added_users)
        {
            cout<<"there is no users\n";
            return;
        }

        for(int i = 0; i < added_users; i++)
        {   
            cout<<"user "<<users[i].name<<" id "<<users[i].id<<" borrowed books ids: ";
            for(int j=0; i<users[i].borrowed_books_quantity; j++)
            {
                // print names istead of ids for now
                cout<<users[i].borrowed_books[j]<<" ";
            }
            cout<<"*****************\n";
        }
    }
 
    void run()
    { 
        while(1)
        {
            int choice = menu();
            
            if(1 == choice)
                add_book();
            else if(2 == choice)
                search_book_by_prefix();
            else if(3 == choice)
                print_who_borrowed_book_by_name();
            else if(4 == choice)
                print_library_by_id();
            else if(5 == choice)
                print_library_by_name();
            else if(6 == choice)
               add_user();
            else if(7 == choice)
                user_borrow_book();
            else if(8 == choice)
                break;
            else if(9 == choice)
                print_users();
            else if(10 == choice){
                cout<<"program Exit\n";
                break;
            }
            else // 0 or flase from menu fn
                break;
        }
    }

};

// program
int main()
{
    librarySystem AlexLibrary;
    AlexLibrary.run();

    return 0;
}
/*
100 math4 3
101 math2 5
102 math1 4
103 math3 2

201 prog1 5
201 prog2 3
*/