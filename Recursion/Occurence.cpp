#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int position, int key)
{
    if (position == n)
    {
        return -1;
    }
    if (arr[position] == key)
    {
        return position;
    }
    return firstOccurence(arr, n, position + 1, key);
}

int lastOccurence(int arr[], int n, int position, int key)
{
    if (position == n)
    {
        return -1;
    }
    int restArray = lastOccurence(arr, n, position + 1, key); // position denote pointer & that pointer going to lase index
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[position] == key)
    {
        return position;
    }
    return -1;
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
    int p, k;
    cin >> p >> k;
    cout << "first occurence at" << firstOccurence(arr, n, p, k) << " & last occurence at" << lastOccurence(arr, n, p, k); // p=start from most off p=0

    return 0;
}