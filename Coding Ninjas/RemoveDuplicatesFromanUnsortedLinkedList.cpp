
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

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

Node *removeDuplicates(Node *head)
{

    if (head == NULL)
        return NULL;

    map<int, bool> visit;
    Node *curr = head;
    while (curr->next != NULL)
    {
        visit[curr->data] = true;
        if (visit[curr->next->data] == true)
        {
            curr->next = curr->next->next;
        }
        else
            curr = curr->next;
    }
    return head;
}