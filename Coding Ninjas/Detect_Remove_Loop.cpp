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

bool detectLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *floydDetectLoop(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL & fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next; // 1st also check wether fast->next is 0 or not
        }                      // 2 times times checks
        slow = slow->next;     // slow speed increase with 1 node by node
        if (slow == fast)
        {

            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydDetectLoop(head); // find the slow element
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *StartOfLoop = getStartingNode(head);
    Node *temp = StartOfLoop;

    while (temp->next != StartOfLoop)//we travels starofloop node to previous startofloop node & then previous(startofloop)->null so out list becoming list without cycle
    {
        temp = temp->next; 
    }
    temp->next = NULL;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    InsertAtPosition(head, tail, 1, 7);
    InsertAtPosition(head, tail, 2, 6);
    InsertAtPosition(head, tail, 3, 2);
    InsertAtPosition(head, tail, 4, 4);
    InsertAtPosition(head, tail, 5, 9);
    InsertAtPosition(head, tail, 6, 3);
    // InsertAtPosition(head, tail, 6, 30);
    // InsertAtPosition(head, tail, 6, 15);
    tail->next = head->next;

    // print(head);-->going in infinite loop , so loop detect detect loop

    if (detectLoop(head))
    {
        cout << "Loop is Present " << endl;
    }
    else
    {
        cout << "Loop doesn't Present " << endl;
    }
    if (floydDetectLoop(head))
    {
        cout << "Floyd Detect " << endl;
    }
    else
    {
        cout << "Floyd Does not Detect " << endl;
    }

    // cout << floydDetectLoop(head)->data;
    cout << getStartingNode(head)->data;
    return 0;
}