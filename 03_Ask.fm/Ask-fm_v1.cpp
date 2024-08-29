#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ThreadQuestion{
  string ques_text;
  vector<string> thread_ques_answers;
};

struct Question {
  string ques_text;
  int id;
  vector<string> answers;
  vector<ThreadQuestion> thread_questions;
};

struct User {
  string name;
  int id;
  string username;
  int password;
  string email;
  bool allowAnonymous;

  vector<Question> questions ;
};

struct AskMe {
  vector<User> users;
  // utilites
  int get_id()
  {
    static int id = 101;
    id += 10;
    return id;
  } 
  
  // methods
  int main_menu()
  {
    int userInput;
    cout
    <<"Menu"
    <<"\n\t"<<"1- Login"
    <<"\n\t"<<"2- Sign up\n";

    cout<<"Enter number 1 - 2: ";
    cin>>userInput;

    return userInput;
  }

  void login_in_menu () {
    string username;
    int password;
    cout<<"Enter username & password: ";
    cin>>username>>password;

    int wantSignup;
    bool userExist = false;

    // makesure that user already exists(sign up)
    // use find or loop

    // we allow differet users with same name for now
    // but we generate unique id for each user
    // so check with id 

    if((int)users.size() >= 1)
    {
      // search if user exist or not
      for(auto &usr: users)
      {
        if(username == usr.username)
          userExist = true;
      }
      if(!userExist){
        cout<<"user doesn't exists\n";
        
        cout<<"press 1 to sign up firstly or -1 to exit: ";
        cin>>wantSignup;
        
        if(wantSignup != -1)
          Sign_up_menu();
        else
          return;
      }
    }
    else
    {
      cout<<"system has NO users\\nplease sign up firstly\n";
      cout<<"press 1 to sign up firstly or -1 to exit: ";
      cin>>wantSignup;
        
      if(wantSignup != -1)
        Sign_up_menu();
      else
        return;
    }
  }
  
  void Sign_up_menu () {
    string username, name, email;
    int password;
    bool allowAnonymous;
    
    cout<<"Enter user name (No spaces): ";
    cin>>username;
    cout<<"Enter password: ";
    cin>>password;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Allow anonymous questions?: (0 or 1): ";
    cin>>allowAnonymous;

    User newUser;
    newUser.id = get_id();
    newUser.username = username;
    newUser.password = password;
    newUser.name = name;
    newUser.email = email;
    newUser.allowAnonymous =- allowAnonymous;

    users.push_back(newUser);
  }

  int program_menu()
  {
    int userInput;
    cout
    <<"Menu"
    <<"\n\t"<<"1- print questions to me"
    <<"\n\t"<<"2- print questions from me"
    <<"\n\t"<<"3- answer question"
    <<"\n\t"<<"4- delete question"
    <<"\n\t"<<"5- ask question"
    <<"\n\t"<<"6- list system users"
    <<"\n\t"<<"7- feed"
    <<"\n\t"<<"8- logout\n\n";

    cout<<"Enter number in range 1 - 8: ";
    cin>>userInput;
    
    return userInput;
  }
  void print_questions_to_me()
  {
    
  }
  void print_questions_from_me()
  {

  }
  void answer_questions()
  {

  }
  void delete_questions()
  {

  }
  void ask_question()
  {
    int id;
    cout<<"Enter user id or -1 to cancel: ";
    cin>>id;
  // search with id in users
  // check if he allow anoynomous or not

  }
  void list_system_users()
  {
    for(auto &usr: users)
    {
      cout<<"ID: "<<usr.id<<"\t"<<"Name: "<<usr.name<<"\n";
    }
  }
  void feed()
  {

  }
  void logout_out() {

  }
  void run()
  {
    while(1)// askme program
    { 
        int m_choice, p_choice;

        while(1) // system sign program
        {
          m_choice = main_menu();
          switch(m_choice)
          {
            case 1:
              login_in_menu(); break;
            case 2:
              Sign_up_menu();break;
            default:
              cout<<"sign system: Invalid choice!\n";
              break;
          }
          break;
        }
      

        //system("clear"); // for clear
        while(1)  // user program
        {
          p_choice = program_menu();
          switch(p_choice)
          {
            case 1:
              print_questions_to_me(); break;
            case 2:
              print_questions_from_me(); break;
            case 3:
              print_questions_from_me(); break;
            case 4:
            answer_questions(); break;
            case 5:
              delete_questions(); break;
            case 6:
              list_system_users(); break;
            case 7:
              feed();break;
            case 8:
              logout_out(); break;
            default:
            cout<<"user program: Invalid choice!\n"; break;
          }
          break;
        }
    }
  }
};

int main()
{
  AskMe askme;
  askme.run();

  return 0;
}