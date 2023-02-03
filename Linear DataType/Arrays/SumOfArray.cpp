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

    int Sum = 0;
    for (int i = 0; i < a; i++)
    {
        Sum += arr[i];
    }

    cout << "The sum of every elements in array : " << Sum;

    return 0;
}