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
};

Node *kReverse(Node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }
    // steps1 : reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step: 2 Recursion onwards
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    // step : 3 return head of reverse;
    return prev;
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
        tail = tail->next;
    }
}
void InsertAtHead(Node *&head, Node *&tail, int data)
{

    // new node create
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
        head = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position <= 0)
    {
        return;
    }

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

    // inserting inthe last postition
    if (temp->next == NULL)
    {

        InsertAtTail(head, tail, data);
        return;
    }
    // create node
    Node *insertAtNode = new Node(data);
    insertAtNode->next = temp->next;
    temp->next = insertAtNode;
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
    Node *head = NULL;
    Node *tail = NULL;
    cout << head << endl;
    cout << tail << endl;

    InsertAtPosition(head, tail, 1, 1);
    InsertAtPosition(head, tail, 2, 2);
    InsertAtPosition(head, tail, 3, 3);
    InsertAtPosition(head, tail, 4, 4);
    InsertAtPosition(head, tail, 5, 5);
    InsertAtPosition(head, tail, 6, -1);
    print(head);

    head = kReverse(head, 2);
    print(head);
}