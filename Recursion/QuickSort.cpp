#include <bits/stdc++.h>
using namespace std;

// int partition(int arr[], int s, int e)
// {
//     int pivot = arr[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     // place pivot at right position
//     int pivotIndex = s + count;
//     swap(arr[pivotIndex], arr[s]);

//     // left and right part
//     int i = s;
//     int j = e;

//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] < pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e)
// {
//     // base
//     if (s >= e)
//         return;

//     // partition part
//     int p = partition(arr, s, e);

//     // left partition
//     quickSort(arr, s, p - 1);

//     // right partition
//     quickSort(arr, p + 1, e);
// }

// int main()
// {
//     int arr[5] = {2, 4, 1, 6, 9};
//     int n = 5;

//     quickSort(arr, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void solve(vector<int> &arr, int s, int e)
{
    // base
    if (s >= e)
        return;

    // partition part
    int p = partition(arr, s, e);
 
    // left partition
    solve(arr, s, p - 1);

    // right partition
    solve(arr, p + 1, e);
}
vector<int> quickSort(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    solve(arr, s, e);
}
int main()
{

    vector<int> v = {2, 4, 6, 1, 8};
    int n = 5;

    quickSort(v);

    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}
