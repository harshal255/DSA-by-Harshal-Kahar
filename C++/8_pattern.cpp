#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;

    int j = 1;
    int count = 1;
    while (j <= n)
    {
        int i = 1;

        while (i <= j)
        {
            cout << count << " ";
            count++;
            i++;
        }
        cout << endl;
        j++;
    }

    return 0;
}