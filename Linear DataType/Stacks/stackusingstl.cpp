#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout << s.top() << endl;

    if (s.empty())
        cout << "stack is empty";
    else
        cout << "stack is not empty";

    return 0;
};