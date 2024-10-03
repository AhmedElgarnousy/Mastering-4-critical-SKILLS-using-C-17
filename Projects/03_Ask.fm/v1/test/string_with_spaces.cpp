#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;



class User {
    int user_id;
    string username;
    int password;
    string name;
    string email;
    bool allow_anonymous;
    unordered_map<int, Question> questions;
    
public:
    // Default constructor
    User() : user_id(0), username(""), password(0), name(""), email(""), allow_anonymous(false) {}
    
    // Custom constructor
    User(int user_id, const string& uname, int pass, const string& nm, const string& eml, bool allowAnon)
        : user_id(user_id), username(uname), password(pass), name(nm), email(eml), allow_anonymous(allowAnon) {}

    void add_question(const Question& q) {
        questions[q.id] = q;
    }

    void print_questions_to_user() const {
        for (const auto& [q_id, question] : questions) {
            question.print();
        }
    }

    // Method to delete a question
    bool delete_question(int q_id) {
        return questions.erase(q_id) > 0;
    }
};

class AskMe {
    unordered_map<int, User> users;
    int current_user_id;
    
public:
    // Default constructor
    AskMe() : current_user_id(-1) {}
    
    void login() {
        int user_id;
        cout << "Enter user ID: ";
        cin >> user_id;
        
        if (users.find(user_id) != users.end()) {
            current_user_id = user_id;
            cout << "Login successful.\n";
        } else {
            cout << "User not found.\n";
        }
    }

    void print_questions_to_me() const {
        for (const auto& [user_id, user] : users) {
            user.print_questions_to_user();
        }
    }

    void delete_question() {
        if (current_user_id == -1) {
            cout << "Please login first.\n";
            return;
        }
        
        int q_id;
        cout << "Enter question ID to delete: ";
        cin >> q_id;
        
        if (users[current_user_id].delete_question(q_id)) {
            cout << "Question deleted successfully.\n";
        } else {
            cout << "Question not found.\n";
        }
    }

    void list_system_users() const {
        for (const auto& [user_id, user] : users) {
            cout << "User ID: " << user_id << "\n";
        }
    }
};

int main() {
    AskMe ask_me;

    // Populate with some users and questions
    ask_me.login();

    return 0;
}
