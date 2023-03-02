#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int j = 1;

    while (j <= 3)
    {
        int i = 1;
        char count = 65;
        while (i <= n)
        {
            cout << (char)(count + j - 1) << " ";
            i++;
            count++;
        }
        cout << endl;
        j++;
    }

    return 0;
}