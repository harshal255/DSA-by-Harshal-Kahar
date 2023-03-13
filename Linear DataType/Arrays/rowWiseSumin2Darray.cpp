#include <bits/stdc++.h>
using namespace std;

void rowWiseSum(int arr[][3], int row)
{

    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {

            rowSum += arr[i][j];
        }
        cout << rowSum << endl;
    }
}
void colWiseSum(int arr[][3], int row)
{

    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < row; j++)
        {

            rowSum += arr[j][i];
        }
        cout << rowSum << endl;
    }
}

int largestRowSum(int arr[][3], int row)
{
    int max = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {

            rowSum += arr[i][j];
        }
        if (rowSum > max)
        {
            max = rowSum;
            rowIndex = i + 1;
        }
    }
    cout << "the maximum sum is " << max << " and " << rowIndex << endl;
    return rowIndex;
}
int largestColSum(int arr[][3], int row)
{
    int max = INT_MIN;
    int colIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int colSum = 0;
        for (int j = 0; j < row; j++)
        {

            colSum += arr[j][i];
        }
        if (colSum > max)
        {
            max = colSum;
            colIndex = i + 1;
        }
    }
    cout << "the maximum sum is " << max << " and " << colIndex << endl;
    return colIndex;
}

int main()
{

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element in " << i + 1 << " th row ";
            cout << "Enter element in " << j + 1 << " th col ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowWiseSum(arr, 3);
    cout << endl;
    colWiseSum(arr, 3);
    largestRowSum(arr, 3);
    largestColSum(arr, 3);

    return 0;
}