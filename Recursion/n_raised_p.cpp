#include <bits/stdc++.h>
using namespace std;
// Calculate n raised to power of p

double Power(double n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    double prePower = Power(n, p - 1);

    return n * prePower;
}

int main()
{
    double n;
    int p;
    cin >> n >> p;
    cout << Power(n, p);

    return 0;
}