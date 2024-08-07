#include<iostream>
#include<vector>


using namespace std;

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


void test3() {
  // 3D Array using vector
  // (5, 7) 2d array with initial value 3
  vector<vector<vector<int>> > v3d(5, vector<vector<int>>(6, vector<int>(7)));

  // 5 x 6 x 7
  cout<< v3d.size() << " "<< v3d[0].size() << " "<< v3d[0][0].size() << "\n"; 

  for(int i = 0; i < v3d.size(); ++i) {
    print(v3d[i]);  // print 2D vec
  }
}



int main() {

test3();

  return 0;
}