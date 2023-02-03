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

    return 0;
}