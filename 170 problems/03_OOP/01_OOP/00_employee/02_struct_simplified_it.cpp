#include <iostream>


using namespace std;

struct full_name {
    string first, middle, last;

    void read()
    {
        cout<<"Enter first middle last names: ";
        cin>>first>>middle>>last;
    }
};

struct employee {
    full_name emp_name;
    int age;
    double salary;

    void read()
    {
        emp_name.read();
        cout<<"Enter emp age& salary: ";
        cin>>age>>salary;
    }
    void print() 
    {
        cout<<emp_name.first<<" has salary "<<salary<<'\n';
    }
};

/*
    - GROUP all relevant attrubutes in ONE unit
    - Employee COMPOSED of full_name
    - Then we provided internal OPERATIONS on these data
        -- read/print/compute
    - we may change to vector of employee, or set
*/

int main()
{

    return 0;
}