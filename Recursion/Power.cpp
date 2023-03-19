#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    // recursive call
    int ans = power(a, b / 2);

       if (b % 2 == 0)
    { // if b is even
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

int main()
{
    int n = 3;
    int k = 5;
    cout << power(n, k) << endl;

    return 0;
}