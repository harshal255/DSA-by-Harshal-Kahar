#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(Node *&head, Node *&tail, int data)
{

    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last postition
    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, data);
        return;
    }
    // creating a node for data;
    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

int main()
{

    Node *node1 = new Node(100);
    // cout << node1->data << endl;
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << "Head & Tail Respectively is " << head << " " << tail << endl;
    InsertAtHead(head, tail, 150);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtHead(head, tail, 350);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtTail(head, tail, 700);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtTail(head, tail, 750);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtTail(head, tail, 790);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtPosition(head, tail, 3, 165);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtPosition(head, tail, 8, 85);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    InsertAtPosition(head, tail, 1, 0);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;

    return 0;
}