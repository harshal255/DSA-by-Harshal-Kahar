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
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;

    print(head);
    InsertAtPosition(head, tail, 1, 30);
    print(head);
    InsertAtPosition(head, tail, 2, 50);
    print(head);

    InsertAtPosition(head, tail, 4, 60);
    print(head);
    InsertAtPosition(head, tail, 5, 75);
    print(head);
   
    return 0;
}