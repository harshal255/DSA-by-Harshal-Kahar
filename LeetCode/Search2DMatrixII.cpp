#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }

    return 0;
}

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Create a 2D vector with n rows and m columns
    vector<vector<int>> v(n, vector<int>(m));

    // Loop over the rows and columns of the vector and read in input values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the value for row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> v[i][j];
        }
    }

    // Print the contents of the 2D vector
    cout << "The contents of the 2D vector are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int target;
    cin >> target;
    cout << searchMatrix(v, target);

    return 0;
}