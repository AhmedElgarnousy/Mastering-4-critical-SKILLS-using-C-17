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
  int get_id()
  {
    static int id = 101;
    id += 10;
    return id;
  } 
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
    while(1)
    { 
        int m_choice, p_choice;

        m_choice = main_menu();
        switch(m_choice)
        {
          case 1:
            login_in_menu();break;
          case 2:
            Sign_up_menu();break;
          default:
            break;
        }

        system("clear"); // for clear

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
          default: break;
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