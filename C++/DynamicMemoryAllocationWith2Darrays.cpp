#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter total row & col :";
    cin >> n >> m;

    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    // creation done

    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter " << i + 1 << "th row and " << j + 1 << "th col :";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing/deleting memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr; // delete whole array(array's of array)

    return 0;
}