#include <bits/stdc++.h>

using namespace std;

unsigned long long Factorial(int n)
{
    unsigned long long factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int nCr(int n, int r)
{
    // nCr=n!/r!*(n-r)!
    if (n >= r)
    {
        int remaining = n - r;
        unsigned long long numerator = Factorial(n);
        unsigned long long denominator1 = Factorial(r);
        unsigned long long denominator2 = Factorial(remaining);
        unsigned long long denominator = denominator1 * denominator2;

        unsigned long long nCr = numerator / denominator;
        return nCr;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cin >> num;
    cout << Factorial(num) << endl;
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);

    return 0;
}