#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> anspair;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    // for first occurence
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    anspair.first = ans;
    // updation
    s = 0;
    e = n - 1;
    mid = s + (e - s) / 2;
    ans = -1;
    // for last occurence
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    anspair.second = ans;

    cout << anspair.first << " " << anspair.second;
    return anspair;
}

int main()
{

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Your array is : ";

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    int key;
    cin >> key;
    cout << endl;
    firstAndLastPosition(v, n, key);

    return 0;
}