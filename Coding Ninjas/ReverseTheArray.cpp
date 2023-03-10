#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}

void reverseArray(vector<int> &arr, int m)
{
    vector<int> first;
    vector<int> second;

    for (int i = m + 1; i < arr.size(); i++)
    {
        second.push_back(arr[i]);
    }
    cout << endl;

    for (int i = 0; i <= m; i++)
    {
        first.push_back(arr[i]);
    }
    arr.clear();

    reverse(second);

    for (auto ele : first)
    {
        arr.push_back(ele);
    }
    for (auto ele : second)
    {
        arr.push_back(ele);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << endl;
    int m;
    cin >> m;
    reverseArray(v, m);
    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}