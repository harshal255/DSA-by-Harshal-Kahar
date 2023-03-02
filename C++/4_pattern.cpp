#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        int i = n;
        while (i >= 1)
        {
            cout << i << " ";
            i--;
        }
        cout << endl;
        j++;
    }

    return 0;
}