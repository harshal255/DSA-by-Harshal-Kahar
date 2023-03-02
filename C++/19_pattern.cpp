#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int j = 1;
    char count = 65;
    while (j <= n)
    {
        int i = 1;
        while (i <= j)
        {
            cout << (char)(65 + n - j + i - 1) << " ";
            i++;
            count++;
        }
        cout << endl;
        j++;
    }

    return 0;
}