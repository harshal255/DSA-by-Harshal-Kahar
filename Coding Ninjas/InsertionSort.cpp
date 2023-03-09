#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    { // initially 0's element is sorted
        int temp = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

// The sorting algorithms in which the order of elements affects the time complexity of the sorting algorithm is known as an adaptive sorting algorithm.
// like Quick Sort, Bubble Sort & intertion Sort

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << endl;
    InsertionSort(v, n);
    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}