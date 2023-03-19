#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge 2 sorted array like first & second;
    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
            arr[k++] = first[index1++];
        else
            arr[k++] = second[index2++];
    }
    // copy first element(means first array is bigger than 2nd)
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    // fist array is smaller than 2nd
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
    delete first, second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // cout << " Helo";
    int mid = (s + e) / 2;
    // left part sort
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {8, 10, 4, 6, 0};
    int n = 5;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}