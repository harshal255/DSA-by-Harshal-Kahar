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
}

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++; 
        temp = temp->next;
    }
    return length;
}
int main()
{
    Node *node1 = new Node(52);
    // cout << node1->data << endl;
    Node *head = node1;
    print(head);
    cout << endl
         << getLength(head);

    return 0;
}