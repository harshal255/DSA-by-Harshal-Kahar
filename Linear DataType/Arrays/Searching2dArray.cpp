#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter no of row "
         << " ";
    cin >> n;
    cout << "Enter no of column "
         << " ";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << "Enter element in " << i + 1 << " th row ";
            cout << "Enter element in " << j + 1 << " th col ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int Searching;

    cout << "Enter element you want to find : ";
    cin >> Searching;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            // Searching == arr[i][j] ? cout << i << "&" << j : cout << "Doesn't found";
            if (arr[i][j] == Searching)
            {
                cout << "Element is found at " << i + 1 << " " << j + 1 << endl;
                flag = true;
                return flag;
            }
        }
    }
    if (flag == true)
    {
        cout << "Not Found";
    }

    cout << endl;

    return 0;
}