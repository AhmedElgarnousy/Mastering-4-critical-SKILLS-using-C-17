/*******************************************************************************
                            * Hospital System version 2 *
                      *     Rewriting code using struct      *
*******************************************************************************/
#include <iostream>
using namespace std;


/*******************************************************************************
                            *     Global Variables      *
*******************************************************************************/
const int  MAX_QUEUE {5}; // spots of patients in each specialization
const int  MAX_SPECIALIZATION {20};

/*******************************************************************************
                            *     STRUCTURES      *
*******************************************************************************/
struct hospital_queue {
    string names[MAX_QUEUE]; // Specialization(1 to 20) 
    int status[MAX_QUEUE]; //status(0,1  0==regular & 1==urgent )
    int len;
    int spec;

    hospital_queue() {
      len = 0;
      spec = -1;
    }
    hospital_queue(int _spec) {
      len = 0;
      _spec =spec; 
    }

    bool add_end(string name, int st){
      if (len  ==   MAX_QUEUE)
        return false;
      
      names[len] = name, status[len] = st, len ++;
      return true;
    }

    bool add_front(string name, int st){
     if (len  ==   MAX_QUEUE)
        return false;
      return true;
    }
    
    void remove_front(){
      if (len == 0) {
        cout<< "No patients at the moment. Have rest, Dr\n";
        return;
      }
      cout<<names[0]  << " Please go with the Dr\n";
      // shift left
      for(int i = 1; i < len; ++i){
        names[i - 1] = names [i];
        status[i - 1] = status[i];
      }
      len --;
    }

    void print()
    {
      if (len == 0)     return;
      cout<< "There are "<< len << " patients in specialization ";
      for(int i = 0; i < len ; ++i) {
          cout<< names[i] << " ";
          if (status[i])    cout<< "urgent\n";
          else              cout<< "regular\n";
      }
      cout<<"\n";
    }

};

struct hospital_system {
   
   hospital_queue queues[ MAX_SPECIALIZATION];

    hospital_system() {
        for(int i = 0; i < MAX_SPECIALIZATION; ++i)
            queues[i] = hospital_queue(i);
    }
    
    void run(){
        while(1)
        {
           int UserChoice = menu();

            if(UserChoice == 1)
              add_patient();
            else if (UserChoice == 2)
              print_patients();
            else if (UserChoice == 3)
                get_next_patients();
            else
              break;
        }
    }

    int menu (){
        int choice;
        while (choice == -1) {

          cout<<"\nEnter Your choice: \n"<<
              "1) Add new patient \n"<<
              "2) Print all patients \n"<<
              "3) Get next patient \n"<<
              "4) Exit \n";

              cin>>choice;

              if (!(1 <= choice && choice <= 4)) {
                  cout<< "Invalid choice. Try again\n";
                  choice = -1;      // loop keep working
              }
      }
       return choice;
    }

    bool add_patient(){
      int spec, st;
      string name;

      cout<<"Enter specialization, name, status: ";
      cin>> spec >>name >> st;

      bool status;
      if(st == 0)
        status = queues[spec].add_end(name, st);
      else
        status = queues[spec].add_front(name, st);

      if (status == false) {
          cout
                  << " Sorry we can't add more patients "
                            "for this specialization\n";
          return false;
      }
      return true;
    }

    void print_patients(){
      cout<< "*********************************************\n";
      for(int spec = 0; spec <  MAX_SPECIALIZATION; ++spec)
        queues[spec].print();
    }

    void get_next_patients(){
        int ReqSpec;  
        cout<<"Enter specialization: ";
        cin>>ReqSpec;
        queues[ReqSpec].remove_front();
    }
  
};



int main()
{
  // freopen("c.in", "rt", stdin);
  hospital_system hospital = hospital_system();
  hospital.run();

  return 0;
}