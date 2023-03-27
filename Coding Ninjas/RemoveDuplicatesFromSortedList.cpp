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

Node *uniqueSortedList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return head;
    }

    // non-empty list
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->data == curr->next->data)
        {
            Node *store = curr->next->next;
            Node *deleteNode = curr->next;
            curr->next->next = NULL;
            delete (deleteNode);
            curr->next = store;
        }
        else
        {
            // not equal
            curr = curr->next;
        }
    }
    return head;
}