#include <bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int SumOfNum = Sum(n - 1);
    // int Sum = SumOfNum + n;
    return SumOfNum + n;
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    cout << Sum(n);

    return 0;
}