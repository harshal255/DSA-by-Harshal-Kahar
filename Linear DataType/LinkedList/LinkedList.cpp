#include <bits/stdc++.h>
using namespace std;
// In a struct, all members are public by default, which means that they can be accessed and modified from outside the struct.

// Implementation of linkedlist node

class Node // or you can create struct(public class)
{
public:
    int data;
    Node *next; // next field stores address of next node

    // In C++, the "->" operator is known as the arrow operator and is used to access the members of a pointer. It is a dereference operator that is used to access the value of the variable that the pointer is pointing to.

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
// why reference : I don't make copy , changes in original linkedlist

{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&Tail, int data)
{
    Node *temp = new Node(data);
    Tail->next = temp;
    Tail = Tail->next;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int data)
{

    if (position == 1)
    {
        InsertAtHead(head, data);
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }

    // Creating a node for data
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// traversal
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
    // created new Node
    Node *node = new Node(10);
    cout << node->data << endl;
    cout << node->next << endl;

    // head pointed to Node
    Node *head = node;
    Node *tail = node;
    print(head);
    cout << endl;
    print(tail);
    InsertAtHead(head, 12);

    print(head);
    InsertAtTail(tail, 15);
    print(head);
    InsertAtPosition(tail, head, 4, 226);
    print(head);
    cout << "head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    return 0;
}
