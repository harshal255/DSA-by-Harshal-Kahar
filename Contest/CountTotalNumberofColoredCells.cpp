#include <bits/stdc++.h>
using namespace std;

long long coloredCells(int n)
{
    long long int num = 1;
    for (long long int i = 1; i < n; i++)
    {
        num += 4 * i;
    }
    return num;
}

int main()
{
    int n;
    cin >> n;
    cout << coloredCells(n);

    return 0;
}