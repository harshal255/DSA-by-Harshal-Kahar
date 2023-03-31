
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int x)
{
    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    pushAtBottom(s, 15);
    printStack(s);

    return 0;
}
