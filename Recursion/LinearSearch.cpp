#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int n, int key)
{
    if (n == 0)
        return false;
    if (*arr == key)
        return true;

    bool remainingPart = linearSearch(arr + 1, n - 1, key);
    return remainingPart;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int size = 6;
    int search = 1;
    bool isPresent = linearSearch(arr, size, search);
    cout << isPresent << endl;

    return 0;
}