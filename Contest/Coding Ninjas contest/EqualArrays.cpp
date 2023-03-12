#include <bits/stdc++.h>
using namespace std;

int equalArrays(int n, int m, vector<int> a, vector<int> b)
{
    int s, e;
    cin >> s >> e;
}

int main()
{
    int m, n;
    vector<int> v1, v2;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v2.push_back(ele);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }

    cout << endl;
    cout << equalArrays(m, n, v1, v2);

    return 0;
}