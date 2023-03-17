#include <bits/stdc++.h>
using namespace std;

int findSum(int *arr, int n)
{
    // base condition

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return *arr;
    }
    // recursive call

    int remainingPart = findSum(arr + 1, n - 1);
    int sum = *arr + remainingPart;
    return sum;
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int n = 5;
    int sum = findSum(arr, n);
    cout << sum << endl;

    return 0;
}