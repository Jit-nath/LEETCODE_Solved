#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[') 
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
                return false;

            char top = stk.top();
            stk.pop();

            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
                return false;
        }
    }
    return stk.empty();
}

void print(bool value)
{
    if (value)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

int main()
{
    string BracketSet1 = "()}[]";
    string BracketSet2 = "([]";

    print(isValid(BracketSet1)); // true
    print(isValid(BracketSet2)); // false
}
