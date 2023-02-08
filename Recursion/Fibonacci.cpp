#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibonacci = Fibonacci(n - 1) + Fibonacci(n - 2);
    return fibonacci;
}
// long long int Fibonacci(long long int n)
// {

//     // using iterative
//     long long int a = 0, b = 1, c;
//     if (n == 0 || n == 1)
//         return n;

//     for (long long int i = 2; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;

    return 0;
}