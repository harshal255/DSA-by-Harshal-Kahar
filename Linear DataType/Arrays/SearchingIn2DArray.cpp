#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][3], int target, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}
void rowWiseSum(int arr[][3], int row)
{
    int rowSum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            rowSum += arr[i][j];
        }
        cout << rowSum << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter no of row "
         << " ";
    cin >> n;
    cout << "Enter no of column "
         << " ";
    cin >> m;
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element in " << i + 1 << " th row ";
            cout << "Enter element in " << j + 1 << " th col ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    int target;

    cout << "Enter the element to search " << endl;
    cin >> target;
    if (isPresent(arr, target, n))
        cout << "Element is Found " << endl;
    else
        cout << "Element does not found";

    return 0;
}