/********************************************************************
                            * Library System  v1 *
********************************************************************/
#include <iostream>

using namespace std;


/********************************************************************
                         * Global Variables *
********************************************************************/

/********************************************************************
                           * Strcutures *
********************************************************************/


int main()
{
  while()
  {

      int user_choice = menu();
  
      if( ! (1<= user_choice  && user_choice <= 10) )
      {
        cout<<"Invalid user choice!!!\n";
      }
      else if(user_choice == 1)
      else if(user_choice == 2)
      else if(user_choice == 3)
      else if(user_choice == 4)
      else if(user_choice == 5)
      else if(user_choice == 6)
      else if(user_choice == 7)
      else if(user_choice == 8)
      else if(user_choice == 9)
      else if(user_choice == 10)
    
  }

  return 0;
}



/********************************************************************
                            *  Implementation   *
********************************************************************/

int menu()
{
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

    return choice;
}
