#include <bits/stdc++.h>
using namespace std;

void primefactor(int n)
{
    int spf[n + 1] = {0}; // small prime factor
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
        // cout << spf[i] << " ";
    }
    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                    // cout << spf[j] << " ";
                }
            }
        }
    }
    cout << endl;
    while (n != 1)
    {
        cout << spf[n] << " ";

        n = n / spf[n];
        // cout << n << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);

    return 0;
}