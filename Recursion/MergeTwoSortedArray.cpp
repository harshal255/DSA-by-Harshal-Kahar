#include <bits/stdc++.h>
using namespace std;

int *merge(int *arr1, int m, int *arr2, int n)
{
    int *arr3 = new int[m + n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {

        if (arr1[i] < arr2[j])
        {

            // arr3[k] = arr1[i];
            // i++;
            // k++;
            arr3[k++] = arr1[i++];
        }
        else
        {

            // arr3[k] = arr2[j];
            // j++;
            // k++;
            arr3[k++] = arr2[j++];
        }
    }

    // copy first element(means first array is bigger than 2nd)
    while (i < m)
    {
        // arr3[k] = arr1[i];
        // i++;
        // k++;
        arr3[k++] = arr1[i++];
    }

    // fist array is smaller than 2nd
    while (j < n)
    {
        // arr3[k] = arr2[j];
        // j++;
        // k++;
        arr3[k++] = arr2[j++];
    }

    // for (int i = 0; i < m + n; i++)
    // {
    //     cout << arr3[i] << " ";
    // }
    return arr3;
    delete arr3;
}

int main()
{
    int arr1[5] = {4, 6, 7, 8, 10};
    int arr2[8] = {1, 5, 8, 9, 11, 34, 41, 55};
    int *ans = merge(arr1, 5, arr2, 8);
    for (int i = 0; i < 13; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}