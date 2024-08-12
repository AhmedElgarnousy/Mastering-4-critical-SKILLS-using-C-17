#include <iostream>

using namespace std;

const int maxSpots = 5;
const int maxSpecialzations = 20;


// like vector of queue = 2d array(queue)
string patient_names [maxSpecialzations + 1] [maxSpots];
int patient_status [maxSpecialzations + 1] [maxSpots];

int currNumOfpatient[maxSpecialzations+1] {0};

int choice;

string in_name;
int in_spec;
int in_status;

int menu()
{
    int user_Input;
  // Display the following choices  
  cout<<"\n Enter your choice:\n"<< 
        "1) Add new patient \n"<<
        "2) Print all patients\n"<<
        "3) Get Next patient\n"<<
        "4) Exit \n";

        cin>>user_Input;
        if(!(user_Input>=1) && user_Input<=4)
            cout<<"Invalid choice\n";
    
        return user_Input;
}

void add_new_patient()
{
    cout<<"Enter specialization, name, status: ";
    cin>>in_spec>>in_name>>in_status;

    currNumOfpatient[in_spec]++;
    
    if(currNumOfpatient[in_spec] >= maxSpots)
    {
        cout<<"sorry we can't add more patients for this specialization\n";
        return;
    }
    
    if(!in_status) // regular, add at the end
    {
        patient_names[in_spec][currNumOfpatient[in_spec] -1] = in_name;
        patient_status[in_spec][currNumOfpatient[in_spec] -1] = in_status;
    }
    else // urgent, right shift
    {
        // right shift
        for(int i = currNumOfpatient[in_spec]; i >= 0; i--)
        {
            patient_names[in_spec][i+1] = patient_names[in_spec][i] ;
            patient_status[in_spec][i+1] = patient_status[in_spec][i] ;
        }
        // add the urgent patient in begin
            patient_names[in_spec][0] = in_name;
            patient_status[in_spec][0] = in_status;
    }
}

void print_all_patients() {
    cout<<"*************************\n";
    for(int i = 1; i <= maxSpecialzations; i++)
    {
        if(currNumOfpatient[i]>0)
        {
            cout<<"There are "<<currNumOfpatient[i]<<" in specialization "<<i<<"\n";
            for(int j=0; j < currNumOfpatient[i]; j++ )
            {
                if(patient_status[i][j])  
                    cout<<patient_names[i][j]<<" urgent"<<"\n";
                else
                    cout<<patient_names[i][j]<<" regular"<<"\n";
            }
        }
    }

}

void get_next_patient(){
    int req_spec;
    cout<<"Enter specialization: ";
    cin>>req_spec;
    
    if(!currNumOfpatient[req_spec]){
        cout<<"No Patients at the moment have a rest, Dr\n";
        return;
    } 
    
    cout<<patient_names[req_spec][0]<<" please go to the Dr\n";
    
    // remove the queue . shift left
    for(int i =0; i < currNumOfpatient[req_spec]; i++ ){
        patient_names[req_spec][i] = patient_names[req_spec][i+1];
        patient_status[req_spec][i] = patient_status[req_spec][i+1];
    }
    currNumOfpatient[req_spec]--;
}

void exit(){
}

void hosptial_system(){
    while(1)
    {
        choice = menu();
        if(choice == 1)
            add_new_patient();
        else if(choice == 2)
            print_all_patients();
        else if(choice == 3)
            get_next_patient();
        else if(choice == 4)
            break;
    }
}

int main()
{
    hosptial_system();

    return 0;
}