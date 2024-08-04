#include <iostream>

struct Question {};
struct User {};
struct QuestionsManager {};
struct UsersManager {};

struct AskMeSystem {
    UsersManager users_manager;
    QuestionsManager questions_manager;
    
    void run () {
      while (1) {
      }
    }
};

int main()
{

  AskMeSystem service;

  service.run();


  return 0;
}