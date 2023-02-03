#include <bits/stdc++.h>
using namespace std;

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
    int min = 0, max = 0;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
         cout << "The max & min element of array is : " << max << " and " << min << endl;
    }
   

    return 0;
}