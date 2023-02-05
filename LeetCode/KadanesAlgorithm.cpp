#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int CurrentSum = 0;
    for (int i = 0; i < n; i++)
    {
        CurrentSum = max(CurrentSum + arr[i], arr[i]);
        maxSum = max(CurrentSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> array[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << maxSubarraySum(array, n);

    return 0;
}