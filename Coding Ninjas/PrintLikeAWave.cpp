#include <bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int j = 0; j < mCols; j++)
    {
        if (j & 1)
        {
            // odd index-->Bottom up approach
            for (int i = nRows - 1; i >= 0; i--)
            {
                // cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            // even index--> top-down approch
            for (int i = 0; i < nRows; i++)
            {
                // cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
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
    vector<int> ans = wavePrint(v, n, m);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}