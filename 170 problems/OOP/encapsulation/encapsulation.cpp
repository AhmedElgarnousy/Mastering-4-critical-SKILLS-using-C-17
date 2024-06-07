#include <iostream>

using namespace std;


/*
Notes :

Definition:
  Encapsulation is a process of combining data members and functions 
  in a single unit called class

1- public & private 
2- default constructor 
5- overloading function
3- paramterized constructor (default constructor that doesn't take values)
4- destructor (doesn't take values, 
                and just one destructor,
                you can call the  destructor)
6- function with object
7- friend function  (friend FunName (className Name);)
  usage: enable you use private attributes from multiple classes


 * declared private here string name;  // this can be getter and setter
  * overloading function: same function with differnt arguments 
*/


class Student
{
  private:
  string name;
  int mark;

  public:
  Student(){
    cout<<"Please Enter name: ";
    cin>>name;
    cout<<"Please Enter Mark: ";
    cin>>mark;
  }
  Student(string n, int m){
    name = n;
    mark = m;
  }

  friend void sum(Student stu1, Student stu2, Student stu3);

  friend string checkMarks(Student stu1, Student stu2, Student stu3)
  {
    if(stu1.mark <= stu2.mark)
    {
      if(stu2.mark < stu3.mark)
        return stu3.name;
      return stu2.name;
    }
    else
    {
      if(stu1.mark < stu3.mark)
        return stu3.name;
      return stu1.name;      
    }
  }
};

void sum(Student stu1, Student stu2, Student stu3)
{
  cout<<stu1.mark + stu2.mark + stu3.mark;
}

int main() 
{

  Student student1("Ahmed", 20), student2("ali", 15), student3("nour", 10); 

  cout<<checkMarks(student1,  student2, student3)<<"\n";
  sum(student1,  student2, student3);

  return 0;
}