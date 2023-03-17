#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (key == arr[mid])

        return true;

    else if (key > arr[mid])

        return binarySearch(arr, mid + 1, end, key);

    else if (key < arr[mid])

        return binarySearch(arr, start, mid - 1, key);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int search = 5;
    bool isPresent = binarySearch(arr, 0, size - 1, search);
    cout << isPresent << endl;
    return 0;
}