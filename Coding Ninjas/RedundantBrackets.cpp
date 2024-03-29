#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '-' || ch == '+' || ch == '/' || ch == '*')
        {

            st.push(ch);
        }
        else
        {
            // ch is closing brackets or lowercase character

            if (ch == ')')
            {
                bool isRedundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '-' || top == '+' || top == '/' || top == '*')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a+b)";
    string s2 = "((a+b))";
    cout << findRedundantBrackets(s) << endl;
    cout << findRedundantBrackets(s2) << endl;
    return 0;
}
