#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int cnt, int N)
{
    // base case
    if (cnt == N / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, cnt + 1, N);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{

    int cnt = 0;
    solve(inputStack, cnt, N);
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
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);

    deleteMiddle(s, 7);
    printStack(s);
}