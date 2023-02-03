#include <bits/stdc++.h>
using namespace std;

int LinearSerch(int arr[], int n)
{

    cout << "Enter element you want to find : ";
    int Search;
    cin >> Search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == Search)
        {
            cout << "Your Element " << arr[i] << " Found at " << i << endl;
            return i;
            // return statement inside the for loop to break out of the loop and return the index of the first found element.
        }
    }
    cout << "Element not found." << endl;
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
    LinearSerch(arr, a);

    return 0;
}