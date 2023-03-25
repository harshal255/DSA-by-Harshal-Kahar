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
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for data " << val << endl;
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

void deleteNode(int position, Node *&head, Node *&tail)
{

    if (position == 1)
    {

        // delete first element of linkedlist
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
            curr->prev = NULL;
            tail = prev;
            prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev = NULL;
            prev->next = curr->next;
            curr->next->prev = prev;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{
    // Node *node1 = new Node(10);
    // cout << node1->data << endl;
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 150);

    InsertAtHead(head, tail, 350);

    InsertAtTail(head, tail, 700);

    InsertAtTail(head, tail, 750);

    InsertAtTail(head, tail, 790);

    InsertAtPosition(head, tail, 3, 165);

    InsertAtPosition(head, tail, 7, 85);

    InsertAtPosition(head, tail, 1, 0);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    deleteNode(1, head, tail);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    deleteNode(6, head, tail);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    deleteNode(4, head, tail);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;
    deleteNode(5, head, tail);
    print(head);
    cout << "Head & Tail Respectively is " << head->data << " " << tail->data << endl;

    return 0;
}