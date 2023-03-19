#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    // 1 case solve - largest element goes to last position
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 3, 1, 6, 9};
    sortArray(arr, 5);
    for (auto ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}