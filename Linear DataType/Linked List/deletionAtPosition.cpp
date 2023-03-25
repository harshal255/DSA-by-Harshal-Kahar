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

    // destructor

    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory Free for node with data " << value << endl;
    }
};

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position <= 0)
    {
        return;
    }

    if (position == 1)
    {
        // new node create
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting inthe last postition
    if (temp->next == NULL)
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = tail->next;
        return;
    }
    // create node
    Node *insertAtNode = new Node(data);
    insertAtNode->next = temp->next;
    temp->next = insertAtNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{

    if (position == 1)
    {

        // delete first element of linkedlist
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete middlel element
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        // update tail
        if (curr->next == NULL)
        {
            tail = prev;
            prev->next = curr->next;
        }
        else
        {
            prev->next = curr->next;
        }

        curr->next = NULL;

        delete curr;
    }
}

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

int main()
{

    Node *node1 = new Node(15);
    Node *head = node1;
    Node *tail = node1;

    InsertAtPosition(head, tail, 2, 25);
    InsertAtPosition(head, tail, 3, 35);
    InsertAtPosition(head, tail, 4, 45);
    InsertAtPosition(head, tail, 5, 55);
    InsertAtPosition(head, tail, 6, 65);
    InsertAtPosition(head, tail, 7, 75);
    print(head);
    deleteNode(5, head, tail);
    print(head);
    cout << "Head & tail " << head->data << " " << tail->data << endl;
    deleteNode(5, head, tail);
    print(head);
    cout << "Head & tail " << head->data << " " << tail->data << endl;
    deleteNode(5, head, tail);
    print(head);
    cout << "Head & tail " << head->data << " " << tail->data << endl;
    deleteNode(1, head, tail);
    print(head);
    cout << "Head & tail " << head->data << " " << tail->data << endl;
    InsertAtPosition(head, tail, 4, 110);
    print(head);
    cout << "Head & tail " << head->data << " " << tail->data << endl;

    return 0;
}