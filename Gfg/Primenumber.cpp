#include <bits/stdc++.h>
using namespace std;

int isPrime(int N)
{
    if (N <= 1)
    {
        return 0;
    }
    if (N > 2 && N % 2 == 0)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int n;
    cin >> n;
    cout << isPrime(n);

    return 0;
}