#include <bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    // Base Condition;
    if (n == 0)
    {
        return 1;
    }
    int preFactorial = Factorial(n - 1);

    return n * preFactorial;
}

int main()
{
    int n;
    cin >> n;
    cout << Factorial(n);

    return 0;
}