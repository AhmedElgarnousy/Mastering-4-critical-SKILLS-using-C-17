#include<iostream>
#include<vector>


using namespace std;


void test1() {
  vector<string> matrix {"mostafa", "ali", "me"};

  // string is 1D array of chars

  // what about vector<string>?
  // matrix of 3 rows, each one has dynamic columms 
  // mostafa 
  // ali 
  // me
  cout<<matrix.size()<<"\n";    // 3 rows

  int rows = matrix.size();
  for(int i = 0; i < rows ; ++i) {
    // Dynamic colum sizes : 7 3 2 
    cout<< matrix[i].size() <<" ";
  }

}


void print(vector<vector<int>> &v2d) {
  for (auto &row : v2d)     // auto = vector<int> 
  {
    for(auto &col : row){
      cout<< col << " ";
    }
      cout<<"\n";
  }
      cout<<"\n\n";
}

void test2() {
  // 2D Array using vector 
  // (2, 5) 2d array 
  vector<int> row(5,1);    // 5 numbers, each  is 1

  // 3 rows: each is 5 values of 1
  vector<vector<int> > v2d(3, row);

  print(v2d);

  int rows = v2d.size(), cols = v2d[0].size();         // 3 5

  v2d[0][0]  = 9;
  v2d[1].push_back(5);
  v2d[1].push_back(6);
  v2d[2].erase(v2d[2].begin());

  print(v2d);
 
}

void test()
{

vector<vector<vector<int>>> v3d( 2, vector<vector<int>> (3, vector<int>(4) ));

for(auto &n: v3d){
  for(auto &row: n)
    {
      for(auto &col: row){
        cout<< col<< " ";
      }
        cout<<"\n";
    }
        cout<<"\n";
}
}


int main() {
  test();

// test1();
// test2();

  return 0;
}