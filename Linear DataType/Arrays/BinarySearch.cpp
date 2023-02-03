#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n)
{
    int init = 0;
    int end = n;

    cout << "Enter element you want to find : ";
    int Search;
    cin >> Search;
    // while (init <= end)
    for (int i = 0; i <= end; i++)

    {
        int middle = (init + end) / 2;
        if (arr[middle] == Search)
        {
            cout << "Your element " << Search << " Found at index " << middle << endl;
            return middle;
        }
        else if (arr[middle] > Search)
        {
            end = middle - 1;
        }
        else
        {
            init = middle + 1;
        }
    }
    return -1;
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

    cout << BinarySearch(arr, a);

    return 0;
}