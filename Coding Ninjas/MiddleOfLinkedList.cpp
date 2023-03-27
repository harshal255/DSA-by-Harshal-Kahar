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

int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node *findMiddle(Node *head)
{
    int len = getLength(head);
    int ans = len / 2;

    Node *temp = head;
    int count = 0;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}