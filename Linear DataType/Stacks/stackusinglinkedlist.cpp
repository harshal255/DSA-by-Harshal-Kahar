#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    { 
        int val = this->data;
        while (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory deleted from value as " << val << endl;
    }
};
class Stack
{
public:
    Node *head;
    int size;

    Stack()
    {
        this->head = NULL;
        this->size = 0;
    }

    void push(int data)
    {
        Node *temp = new Node(data);

        temp->next = head;
        head = temp;
    }

    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            // int res = head->data;
            Node *temp = head;
            head = head->next;
            delete temp;
            // return res;
        }
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    Stack s;
    // cout << s.head << endl;
    // cout << s.size << endl;
    s.push(5);
    cout << s.peek() << endl;
    s.push(6);
    cout << s.peek() << endl;
    s.push(7);
    cout << s.peek() << endl;
    s.push(8);
    cout << s.peek() << endl;
    s.push(9);
    cout << s.peek() << endl;
    s.push(10);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.push(30);
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
    s.pop();
    cout << s.peek() << endl;
    cout << s.isEmpty();

    return 0;
}