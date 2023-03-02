#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int j = 1;
    while (j <= n)
    {
        // space
        int space = n - j;
        while (space)
        {
            cout << " ";
            space--;
        }

        // stars
        int i = 1;
        while (i <= j)
        {
            cout << "*";
            i++;
        }
        cout << endl;
        j++;
    }

    return 0;
}