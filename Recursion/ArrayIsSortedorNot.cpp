#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1); // starting point with next element of first
    if (arr[0] <= arr[1] && restArray)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;

    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << sorted(arr, n);

    return 0;
}