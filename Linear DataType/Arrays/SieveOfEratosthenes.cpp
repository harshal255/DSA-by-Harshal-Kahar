#include <bits/stdc++.h>
using namespace std;

int primeSieve(int n)
{
    int prime[n + 1] = {0}; // initialize with 0 value
    int count;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
            count += 1;
        }
    }
    cout << endl;
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << primeSieve(n);

    return 0;
}