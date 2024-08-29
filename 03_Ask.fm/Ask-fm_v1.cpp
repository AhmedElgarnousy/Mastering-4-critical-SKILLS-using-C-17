#include <iostream>
#include <vector>

using namespace std;

struct Question {
  string ques_text;
  int id;
  string answers [3];
};

struct User {
  string name;
  int id;
  string username;
  int password;
  string mail;
  vector<Question> questions ;
};

struct AskMe {
  vector<User> users;
  
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
    bool isAnonymous;
    
    cout<<"Enter user name (No spaces): ";
    cin>>username;
    
    cout<<"Enter password: ";
    cin>>password;

    cout<<"Enter name: ";
    cin>>name;
    
    cout<<"Enter email: ";
    cin>>email;

    cout<<"Allow anonymous questions?: (0 or 1): ";
    cin>>isAnonymous;
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

  }
  void list_system_users()
  {

  }
  void feed()
  {

  }
  void logout_out() {

  }
  void run()
  {

  }
};

int main()
{
  AskMe askme;
  askme.run();

  return 0;
}