/*******************************************************************************
                            * Hospital System *
*******************************************************************************/
#include <iostream>
using namespace std;


/******************************************************************************
                            * Prototypes *
*******************************************************************************/
int menu();
void add_patient();
void print_all_patients();
void Get_next_patient();

/*******************************************************************************
                            * Global Variables *
*******************************************************************************/
int UserChoice;
const int  MAX_QUEUE {5}; // spots of patients in each specialization
const int  MAX_SPECIALIZATION {20};

string patient_names[MAX_SPECIALIZATION+1][MAX_QUEUE]; // Specialization(1 to 20) 
int patient_status[MAX_SPECIALIZATION+1][MAX_QUEUE]; //status(0,1  0==regular & 1==urgent )
int queue_length[MAX_SPECIALIZATION +1 ] = {0};

int Patient_Idx = 0;
int Spec_Idx = 0;


/**************************************************************************
                            * Program  *
**************************************************************************/
int main()
{
  int UserChoice;
  while(1)
  {
      UserChoice = menu();

      if(UserChoice == 1)
        add_patient();
      else if (UserChoice == 2)
        print_all_patients();
      else if (UserChoice == 3)
          Get_next_patient();
      else if (UserChoice == 4)
        Exit();
      else
        cout<<"Invalid Choice!!!!!!!\n";
  }
  return 0;
}


/*******************************************************************************
                          * Functions Definitions *
*******************************************************************************/
int menu()
{
  int userInput;
    cout<<"\nEnter Your choice: \n"<<
        "1) Add new patient \n"<<
        "2) Print all patients \n"<<
        "3) Get next patient \n"<<
        "4) Exit \n";

        cin>>userInput;

  return userInput;
}

void add_patient()
{
  // Patient_Idx ++;
    cout<<"Enter specialization, name, status: ";
    cin>>Spec_Idx>> patient_names[Spec_Idx][queue_length[Spec_Idx]] >> patient_status[Spec_Idx][ queue_length[Spec_Idx]];
     queue_length[Spec_Idx] ++;


    /* Feature: For each specialization, there are only 5 available spots [queue] */    
      for(int i = 1; i < MAX_SPECIALIZATION +1 ; i++ )
      {
        if(queue_length[i] == 5)
        {
          cout<<"sorry we can't add move more patients for this specialization \n";
        }
      }

    /* Feature: if status urgent put it in beggining*/

    // search until 
    // for(int i){

    // }
    /*
    sol1: Has bug
    // if reguler
    if(!(Patient_Status[NumOfPatient]))
    {
      // check previous one if urgent
      if((Patient_Status[NumOfPatient - 1]))
        {
          //switch between them
          string tempName;
          int TempStatus;
         TempStatus =  Patient_Status[NumOfPatient ];
         Patient_Status[NumOfPatient] =  Patient_Status[NumOfPatient -1];
         Patient_Status[NumOfPatient - 1] =  TempStatus;

         tempName =  Patient_Names[NumOfPatient];
         Patient_Names[NumOfPatient] =  Patient_Names[NumOfPatient -1];
         Patient_Names[NumOfPatient - 1] =  tempName;
        }
    }
    */

}

void print_all_patients()
{
    for(int i = 0; i < MAX_SPECIALIZATION +1 ; i++ )
      {
        if(queue_length[i] >= 1)
        {

          cout<<"************************************* \n";
          cout<<"There are "<<queue_length[i] <<" Patients"<<" in spectialization " << i <<"\n";
          for(int col = 1;  col <= queue_length[i]; col++)
          {
            //print patient name with urgent or not
            if(patient_status[i][col])
              cout<<patient_names[i][col - 1]<<" " << "urgent" <<"\n";
            else
              cout<<patient_names[i][col - 1]<<" " << "regularrr" <<"\n";
          }
        }
      }
}

void Get_next_patient()
{
  int RequestedSpec;
    cout<<" Enter specialization: ";
    cin>>RequestedSpec;

      if(patient_names[RequestedSpec][0] == " ")
          cout<<"No patient at the moment. Have rest, Dr";
      cout<<patient_names[RequestedSpec][0]<<" please go with the Dr \n";
}

void Exit()
{
    // cout<<" ";
}


