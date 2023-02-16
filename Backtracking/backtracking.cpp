#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    //** denoted 2d array allocated with dynamically,x-->particular block col & y-->particular block row, n= 2D matrix size

    if (x < n && y < n && arr[x][y] == 1)
    { // for 1 which is bloack such as ,does you can travelling or backtracking  as well as & 0 for you can't
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArray)
{

    // Base Condition

    if (x == n - 1 && y == n - 1)
    {
        solArray[x][y] = 1;
        return true;
    }

    // for backtracking condition
    if (isSafe(arr, x, y, n))
    {
        solArray[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArray))
        {
            // x+1 means go with right direction
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArray))
        {

            // y+1 means go with next down- direction row

            return true;
        }
        // if both are give ans is false then-->
        solArray[x][y] = 0; // Backtracking
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    // for dynamically  memory allocate in question array;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    cout << endl;
    // for input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << endl;

    // outPut arr
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // for solution array input
    int **SolArray = new int *[n];
    for (int i = 0; i < n; i++)
    {

        SolArray[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            SolArray[i][j] = 0;
        }
    }
    cout << endl;

    // for solution array output;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << SolArray[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if (ratinMaze(arr, 0, 0, n, SolArray))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << SolArray[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
