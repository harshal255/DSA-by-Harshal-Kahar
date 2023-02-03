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
    cout << endl;

    // spiral order logic
    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = m - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        
        // for rowStart
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;

        // for colEnd
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;

        for (int col = colEnd; col >= colStart; col--)
        {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;

        // for column_Start
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}