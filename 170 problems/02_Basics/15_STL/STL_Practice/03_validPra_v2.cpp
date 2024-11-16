#include <iostream>
#include <stack>

using namespace std;

// using stack but just for () 
// after study map add {}, []
bool IsValidParenttheses(string str)
{
    stack<char>stk;
    
    // if string is odd, so it's invalid, don't waste your time
    if((int)str.size() %2 == 1 ) 
        return 0;

    for(int i = 0; i < (int)str.size(); i++)
    {
        if(str[i] == '(')
        {
            stk.push(str[i]);
        }
        else
        {
            if( '(' != stk.top())
                return 0;
            else
                stk.pop();
        }
    }

    if(stk.empty())
        return 1;
    else
        return 0;
}

int main()
{
    string str = "((()()()()))";
    
    cout<<boolalpha;
    cout<<IsValidParenttheses(str)<<"\n";

    return 0;
}