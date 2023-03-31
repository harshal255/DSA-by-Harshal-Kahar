#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // basecase
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}
void insertAtBottom(stack<int> &stack, int element)
{

    // base case
    if (stack.empty())
    {
        stack.push(element);
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    insertAtBottom(stack, element);
    stack.pop();
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);
    insertAtBottom(stack, num);
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

    printStack(s);
    reverseStack(s);
    printStack(s);

    return 0;
}