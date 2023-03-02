#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> stack;
    int n = s.length();

    if (n % 2 != 0)
    {
        return false;
    }
    if (n == 0)
    {
        return true;
    }

    for (auto ele : s)
    {
        //  cout << ele << " ";
        if (ele == '(' || ele == '[' || ele == '{')
        {
            stack.push(ele);
        }
        else
        {
            if (stack.empty())
            {
                return false;
            }
            if (ele == ')' && stack.top() != '(')
            {
                return false;
            }
            if (ele == ']' && stack.top() != '[')
            {
                return false;
            }
            if (ele == '}' && stack.top() != '{')
            {
                return false;
            }
            stack.pop();
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << isValid(s);

    return 0;
}