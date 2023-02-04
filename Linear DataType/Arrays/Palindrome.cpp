#include <bits/stdc++.h>
using namespace std;

void Swap(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    char arr[n + 1]; // index n+1 stores \0-->null
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // palindrome problem "harsh==harsh"
    // reverse char array
    char reverseArr[n + 1];
    for (int i = 0; i < n; i++)
    {

        reverseArr[i] = arr[n - i - 1];
    }
    reverseArr[n + 1] = '\0';

    cout << "check reverse array : ";
    for (int i = 0; i < n; i++)
    {
        cout << reverseArr[i] << " ";
    }
    cout << endl;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        arr[i] == reverseArr[i] ? flag = true : flag = false;
    }
    // cout << flag;
    flag == 1 ? cout << "String matching " : cout << "String didn't match";

    return 0;
}