#include <bits/stdc++.h>
using namespace std;

void swapAlternate(vector<int> &arr)
{
    int n = arr.size();
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
        cout << endl;
    }

    for (auto ele : arr)
    {
        cout << ele << " ";
    }
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
    cout << endl;
    swapAlternate(v);

    return 0;
}