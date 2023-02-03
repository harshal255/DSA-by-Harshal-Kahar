#include <bits/stdc++.h>
using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int space = arr[i];
        int j = i - 1;
        for (j; j >= 0 && arr[j] > space; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = space;
    }
    cout << "Sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int a;
    cout << "Enter size of array "
         << " ";
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter elements " << i + 1 << " ";
        cin >> arr[i];
    }

    cout << "Your array is " << endl;
    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
    InsertionSort(arr, a);

    return 0;
}