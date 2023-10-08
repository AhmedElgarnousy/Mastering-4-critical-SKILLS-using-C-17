/*******************************************************************************
                            * Hospital System version 2 *
                      *     Rewriting code using struct      *
*******************************************************************************/
#include <iostream>
using namespace std;


/*******************************************************************************
                            *     STRUCTURES      *
*******************************************************************************/
const int  MAX_SPECIALIZATION {20};
const int  MAX_QUEUE {5}; // spots of patients in each specialization

struct hospital_queue {
    string names[MAX_SPECIALIZATION+1][MAX_QUEUE]; // Specialization(1 to 20) 
    int status[MAX_SPECIALIZATION+1][MAX_QUEUE]; //status(0,1  0==regular & 1==urgent )
    int len;
    int spec;

    hospital_queue() {}
    hospital_queue(int _spec) {}

    bool add_end(string name, int st){}

    bool add_front(string name, int st){}
    
    void remove_front(){}

    void print(){}

};

struct hospital_system {
   
   hospital_queue queues[ MAX_SPECIALIZATION];

    hospital_system() {}
    
    void run(){}

    int menu (){}

    bool add_patient(){}

    void print_patients(){}

    void get_next_patients(){}
   

};



int main()
{
  freopen("c.in", "rt", stdin);
  hospital_system hospital = hospital_system();
  hospital.run();

  return 0;
}