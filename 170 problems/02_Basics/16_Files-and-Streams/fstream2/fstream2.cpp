#include <iostream>
#include<fstream>   // for istream and ofstream
using namespace std;

/*
  A way to read and write in the same time
*/
int main()
{
  /*
  reading and writing (appending)
  bool append = true;

  // define status flag
  auto status = ios::in | ios::out | ios::app; // for append

  if(!append)
    status = ios::in | ios::out | ios::trunc; // to overwrite the file

  string path = "names.txt";
  fstream file_handler(path.c_str(), status);
  
  if(file_handler.fail())
  {
    cout<<"can't open the file\n";
    return 0;
  }

  string f_name, s_name;
  file_handler >> f_name >> s_name;

  file_handler.clear(); // if any internal errors before writing 

  file_handler<<"\nname: "<<f_name<<" "<<s_name<<"\n"; 
  file_handler<<"\nElgarnousy"<<"\n";

  file_handler.close();
  */ 

/*
    //reading whole file content
*/
  string path = "names.txt";
  fstream file_handler(path.c_str());

  if(file_handler.fail()) {
      cout<< "can't open the file\n";
      return 0;
  }

  string line;

  while(getline(file_handler, line)) {
    cout<< line << "\n";
  }

  file_handler.close();

  return 0;
}