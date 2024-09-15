#include <iostream>
#include<bits/stdc++.h> // for freopen
#include<fstream>   // for istream and ofstream
using namespace std;


int main()
{
  /*
  // the easy way 
  freopen ("read_file.txt", "rt", stdin);

  int x, y;
  cin >> x >>y;

  cout<< x + y;
  */
 
 /*
 //reading using ifstraem and ofstream
 */
  ifstream fin ("read_file.txt");
  ifstream fin2 ("read_file2.txt");

  ofstream fout ("write_file.txt");

  if(fin.fail()) {
    cout<<"can't open the file \n";
    return 0;
  }
  int x, y;
  // fin>>x>>y;
  fin>>x;
  fin2>>y;

  // cout<<x+y;
     fout<<x+y;

  fin.close();

  // you can read from several files



  return 0;
}