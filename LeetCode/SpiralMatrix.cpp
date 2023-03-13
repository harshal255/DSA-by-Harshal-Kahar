#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    // cout << row << " " << col << endl;
    int count = 0;
    int total = row * col;

    // index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // print staring row
        for (int i = startingCol; i <= endingCol && count < total; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        // increase staring row
        startingRow++;

        // print ending col
        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        // decrease ending col
        endingCol--;

        // print ending row
        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }

        // decrease endingrow
        endingRow--;

        // print staring col
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        // increase staring col
        startingCol++;
    }

    return ans;
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

    vector<int> ans = spiralOrder(v);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}