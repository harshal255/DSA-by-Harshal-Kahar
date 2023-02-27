#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<string> q;
    q.push("Harshal");
    q.push("Darshan");
    q.push("Tushar");
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;

    cout << q.size();
    return 0;
}