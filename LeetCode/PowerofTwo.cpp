#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{

    for (int i = 0; i <= 30; i++)
    {
        if (pow(2, i) == n)
        {
            return true;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);

    return 0;
}