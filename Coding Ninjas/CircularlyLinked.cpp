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

bool isCirculerList(Node *&head)
{
    // empty list
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    int cnt = 0;
    while (temp != NULL && temp != head)
    {
        cnt++;
        temp = temp->next;
        // for prevent infinite loop if 2 element is same then occure infinite loop
        if (cnt > 10000)
            return false;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}


int main()
{
    // create a linked list
    Node *head = new Node(1);

    Node *second = new Node(2);

    Node *third = new Node(3);

    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head; // make the list circular
   

    // check if the linked list is circular and print the result
    if (isCirculerList(head))
    {
        cout << "The linked list is circular." << endl;
    }
    else
    {
        cout << "The linked list is not circular." << endl;
    }

    return 0;
}