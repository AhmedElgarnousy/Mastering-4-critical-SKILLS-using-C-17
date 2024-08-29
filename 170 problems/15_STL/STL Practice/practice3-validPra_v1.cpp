#include <iostream>
#include <vector>

using namespace std;

// using vector
bool IsValidParenttheses(string str)
{
    vector<char>vec;
    int closed [3] {0};
    int open [3] {0};

    for(int i = 0; i  < str.size(); i++)
        vec.push_back(str[i]);
    
    while(!vec.empty()) 
    {
        if(vec.back() == '}' )
            closed[0] ++;
        else if(vec.back() == ']')
            closed[1] ++;
        else if(vec.back() == ')')
            closed[2] ++;
        
        else if(vec.back() == '{')
            open[0]++;
        else if(vec.back() == '[')
            open[1]++;
        else if(vec.back() == '(')
            open[2]++;

        vec.pop_back();
        cout<<"\n"<<vec.back();
    }

    if(closed[0] == open[0] && closed[1] == open[1] && closed[2] == open[2] )
        return 1;
    
    return 0;    
}

int main()
{
    string str = "{([()](}";
    
    cout<<boolalpha;
    cout<<IsValidParenttheses("((()()()()))")<<"\n";

    return 0;
}