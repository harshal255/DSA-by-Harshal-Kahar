#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (auto element : v)
    {
        cout << element << " ";
    }

    cout << '\n';
    // another way to iterate throw this vector using iterator

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << '\n';

    vector<int> v2(3, 50);
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << "\n";

    swap(v, v2);
    cout << "\n";
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << "\n";
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto ele : v2)
    {
        cout << ele << " ";
    }

    return 0;
}