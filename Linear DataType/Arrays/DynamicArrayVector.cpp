#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    int n;
    cout << "size of vector : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}