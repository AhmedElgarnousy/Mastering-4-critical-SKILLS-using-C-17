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
  string answer = "empty";
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
  int get_user_id()
  {
    static int id = 101;
    id += 10;
    return id;
  } 
  int get_question_id()
  {
    static int id = 20;
    id += 1;
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
    newUser.id = get_user_id();
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
    for(auto &usr: users)
    {
      for(auto &que: usr.questions)
      {
        cout<<"Question Id ("<<que.id<<") from user id ("<<usr.id<<")"<<"\t"<<"Question: "<<que.ques_text<<"\n";
        cout<<"\t Answer: "<<que.answer<<"\n";
        /*
        for(auto &thread_q: que.thread_questions)
        {

        }
        */
      }
    }
  }
  void print_questions_from_me()
  {
    // you have to print the current user questions
    // but for now print all users questions
    for(auto &usr: users)
    {
      for(auto &que: usr.questions)
      {
        cout<<"Question Id ("<<que.id<<") from user id ("<<usr.id<<")"<<"\t"<<"Question: "<<que.ques_text<<"\n";
        // loop if has thread questions for the question
      }
    }
  }
  void answer_questions()
  {
    int q_id;
    string q_ans;
    cout<<"Enter question id or -1 to cancel: ";
    cin>>q_id;

    for(auto &usr: users)
    {
      for(auto &que: usr.questions)
      {
        if (que.id == q_id)
        {
          if(que.answer !="empty")
          {
            cout<<"Question Id ("<<que.id<<") from user id ("<<usr.id<<") Question: "<<que.ques_text<<"\n";
            cout<<"\t Answer: "<<que.answer<<"\n";
            cout<<"Warning: Already answered. Answer will be updated\n";
          }
          cout<<"Enter answer: ";
          cin>>q_ans;
          getline(cin, q_ans);
          que.answer = q_ans;
        }
      }
    }
  }
  void delete_questions()
  {

  }
  void ask_question()
  {
    // ask a question not a thread
    int ursId, q_id;
    cout<<"Enter user id or -1 to cancel: ";
    cin>>ursId;
    string q_text;
    // search with id in users
    // check if he allow anoynomous or not
    // user already exist because he sign up 
    for(auto &usr : users)
    {
      if(usr.id == ursId){

        if(!usr.allowAnonymous)
          cout<<"Note: Anonymous questions are not allowed for this user\n";
        cout<<"For a thread question: Enter Question id or -1 for new question: ";
        cin>>q_id;

        if(q_id != -1)
        {
          // create a thread question
        }
        else
        {
          // create a new question
          cout<<"Enter question text: ";
          cin>>q_text;
          getline(cin, q_text); 

          Question newQusestion;
          newQusestion.id = get_question_id();
          newQusestion.ques_text = q_text;

          usr.questions.push_back(newQusestion);
        }
      }
    }
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
              answer_questions(); break;
            case 4:
            delete_questions(); break;
            case 5:
              ask_question(); break;
            case 6:
              list_system_users(); break;
            case 7:
              feed();break;
            case 8:
              logout_out(); break;
            default:
            cout<<"user program: Invalid choice!\n";break;
          }
          if(p_choice == 8)
          {
            break;
          }
        }
    }
  }
};

int main()
{

  AskMe askme;
  // create a user name 
  User usr1;
  usr1.id = askme.get_user_id();
  usr1.username="ahmed";
  usr1.password= 111;
  usr1.name="AhmedKamal";
  usr1.email="AHmed@gmail.com";
  askme.users.push_back(usr1);
  askme.run();

  return 0;
}