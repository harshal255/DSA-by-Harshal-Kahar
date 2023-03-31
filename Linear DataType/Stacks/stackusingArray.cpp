#include <bits/stdc++.h>
using namespace std;

class Stack
{

public:
    // data properties
    int *arr;
    int top;
    int size;
    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack is underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // create a stack of 5 size

    Stack s(5);
    cout << s.peek() << endl;
    s.push(10);
    cout << s.peek() << endl;
    s.push(20);
    cout << s.peek() << endl;
    s.push(30);
    cout << s.peek() << endl;
    s.push(40);
    cout << s.peek() << endl;
    s.push(50);
    cout << s.peek() << endl;
    s.push(60);

    cout << s.peek() << endl;
    s.push(70);

    cout << s.peek() << endl;
    s.push(80);

    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;

    return 0;
}