#include <iostream>
#include<fstream>   // for istream and ofstream
using namespace std;


int main()
{
  /*
  // reading and writing (appending)
  bool append = true;

  auto status = ios::in | ios::out | ios::app;  //app for apppend

  if(!append) {
    status = ios::in | ios::out | ios::trunc; // overwrite
  }

  string path = "names.txt";
  fstream file_handler(path.c_str(), status);

  if(file_handler.fail()) {
      cout<< "can't open the file\n";
      return 0;
  }

  string first, second;

  file_handler>>first>>second;

  cout<<first << " " << second<< "\n";

  file_handler.clear();  // if any internal error. before writing
  file_handler<<"\nibrahim\n";
  file_handler.close();
  */

 /*
 // reading whole file content
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