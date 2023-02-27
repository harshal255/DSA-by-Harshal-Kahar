#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(39);
    max.push(82);
    max.push(24);
    cout << max.size() << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(1);
    min.push(39);
    min.push(82);
    min.push(24);
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    return 0;
}