#include <iostream>

using namespace std;


namespace Customer {
    int first = 1, second = 2;
}
namespace Admin {
int total = 5;
}
// Let first be visiable through whole file
using Customer::first;

// More flexiable, But all inside Customer is visible!
//using namespace Customer;

int main()
{
    // Easier for repetitive through whole file 
    // But be careful of local collisions

    cout<< first <<"\n";
    
    // second Not visiable
    // cout<< second <<"\n";

    //cout<< total <<"\n";
    // Let total be visiable through the function
    using Admin::total;
    cout<< total <<"\n";

    return 0;
}