#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    // cout << a;
    return a;
}

int gcd(int N, int arr[])
{
    int c;
    if (N == 1)
    {
        for (int i = 0; i < N; i++)
        {
            c = arr[i];
        }
        return c;
    }
    else
    {
        int a = arr[1];
        int b = arr[0];
        c = findGCD(a, b);
        for (int i = 2; i < N ; i++)
        {
            c = findGCD(c, arr[i]);
            // cout << c << " ";
        }
        return c;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << gcd(n, arr) << endl;

    return 0;
}