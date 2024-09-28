#include<iostream>
#include<fstream> // for ifstream and ofstream


/*
    fin is very similar to cin but we just define it byself
*/
using namespace std;

int main()
{
    ifstream fin("read_file.txt");
    if(fin.fail())
    {
        cout<<"can't open a file\n";
        return 0;
    }
    int x, y;
    fin>> x >> y;

    fin.close();

    ofstream fout("write_file.txt");
    if(fout.fail())
    {
        cout<<"can't open a file\n";
        return 0;
    }
    fout<<x + y;
    fout.close();

    // note: you can read and rwrite from serveral files

    return 0;
}