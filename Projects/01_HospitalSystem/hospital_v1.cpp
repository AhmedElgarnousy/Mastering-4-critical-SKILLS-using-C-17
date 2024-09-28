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
void Exit();

/*******************************************************************************
                            * Global Variables *
*******************************************************************************/
int UserChoice;
const int  MAX_QUEUE {5}; // spots of patients in each specialization
const int  MAX_SPECIALIZATION {20};

string patient_names[MAX_SPECIALIZATION+1][MAX_QUEUE] = {" "}; // Specialization(1 to 20) 
int patient_status[MAX_SPECIALIZATION+1][MAX_QUEUE]; //status(0,1  0==regular & 1==urgent )
int queue_length[MAX_SPECIALIZATION +1 ] = {0};

int Spec_Idx  ;

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
    cout<<"Enter specialization, name, status: ";
    cin>>Spec_Idx;
    queue_length[Spec_Idx] ++;
    cin>>patient_names[Spec_Idx][queue_length[Spec_Idx]] >> patient_status[Spec_Idx][queue_length[Spec_Idx]];

       
    /* Feature: if status urgent put it in beggining */
    if(patient_status[Spec_Idx][queue_length[Spec_Idx]])   // urgent  == 1
    {    
       // store urgent in temp name
       string tempName =  patient_names[Spec_Idx][queue_length[Spec_Idx]];
       int tempStatus =  patient_status[Spec_Idx][queue_length[Spec_Idx]];

      // shift right names to put urgent in start
      for(int i = queue_length[Spec_Idx] - 1 ; i > 0; i--){ 
        patient_names[Spec_Idx][i+1] = patient_names[Spec_Idx][i] ; 
        patient_status[Spec_Idx][i+1] = patient_status[Spec_Idx][i] ; 
      }
      // assign urgent in start 
      patient_names[Spec_Idx][1] = tempName;
       patient_status[Spec_Idx][1] = tempStatus;
    }
    else
    {
      // regular
      // patient_names[Spec_Idx][queue_length[Spec_Idx]] = patient_names[Spec_Idx][queue_length[Spec_Idx]];
    }    
}

void print_all_patients()
{
    for(int i = 1; i < MAX_SPECIALIZATION +1 ; i++ )
      {
        if(queue_length[i] >= 1) // makesure patients exist or not
        {
          cout<<"************************************* \n";
          cout<<"There are "<<queue_length[i] <<" Patients"<<" in spectialization " << i <<"\n";

          for(int col = 1;  col <= queue_length[i]; col++)
          {
            if(queue_length[i] > 6)
            {
              cout<<"sorry we can't add move more patients for this specialization \n";
            }
            else
            {
              //print patient name with urgent or not
                if(patient_status[i][col])
                  // cout<<"val of i and col status 1  "<<i<<" "<<col<<"\n";
                  cout<<patient_names[i][col]<<" " << "urgent" <<"\n";
                else
                  // cout<<"val of i and col status 0  "<<i<<" "<<col<<"\n";
                  cout<<patient_names[i][col]<<" " << "regularr" <<"\n";
            }
          }
        }
      }
}

void Get_next_patient()
{
  int RequestedSpec;
  
    cout<<"Enter specialization: ";
    cin>>RequestedSpec;

      if(queue_length[RequestedSpec] == 0) // last ele: patient_names[RequestedSpec][queue_length[RequestedSpec]]
          cout<<"No patient at the moment. Have rest, Dr";


      cout<<patient_names[RequestedSpec][1]<<" please go with the Dr \n"; // first patient_names[RequestedSpec][0]
      // remove it by shiting left
      for(int i = 1;  i < queue_length[RequestedSpec] ; i++){ 
        patient_names[RequestedSpec][i] = patient_names[RequestedSpec][i+1] ; 
        patient_status[RequestedSpec][i] = patient_status[RequestedSpec][i+1] ; 
      }
      queue_length[RequestedSpec] --;
}

void Exit()
{
    // cout<<" ";
}

