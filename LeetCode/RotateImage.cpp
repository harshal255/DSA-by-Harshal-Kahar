#include <bits/stdc++.h>
using namespace std;

/*
 * clockwise rotate
 * first reverse up to down, then swap the symmetry
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
 */

void rotate(vector<vector<int>> &matrix)
{
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = i + 1; j < matrix[i].size(); ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
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

    rotate(v);
    cout << "After 90degree rotate" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}