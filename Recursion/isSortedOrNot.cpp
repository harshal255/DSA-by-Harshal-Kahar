#include <bits/stdc++.h>
using namespace std;

bool isAssendingSorted(int *arr, int n)
{

    // base condition
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (*(arr) > *(arr + 1))
    {
        return false;
    }
    else
    {
        bool remainingPart = isAssendingSorted(arr + 1, n - 1);
        return remainingPart;
    }
}
bool isDesendingSorted(int *arr, int n)
{

    // base condition
    if (n == 0 || n == 1)
    {
        return true;
    }

    if (*(arr) < *(arr + 1))
    {
        return false;
    }
    else
    {
        bool remainingPart = isDesendingSorted(arr + 1, n - 1);
        return remainingPart;
    }
}

bool isSorted(int *arr, int n)
{
    bool AssendingSorted = isAssendingSorted(arr, n);
    bool DessendingSorted = isDesendingSorted(arr, n);
    if (AssendingSorted || DessendingSorted)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[6] = {10, 9, 7, 8, 7, 6};
    int arr1[6] = {6, 7, 11, 9, 10, 11};

    int size = 6;
    bool ans = isAssendingSorted(arr, size);
    bool ans1 = isDesendingSorted(arr, size);
    bool ans2 = isSorted(arr, size);
    bool ans3 = isSorted(arr1, size);
    cout << ans << " " << ans1 << endl;
    cout << ans2 << " " << ans3 << endl;

    return 0;
}