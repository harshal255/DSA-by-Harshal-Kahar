#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        int i = 1;
        while (i <= n)
        {
            cout << (char)(65 + i - 1) << " ";
            i++;
        }
        cout << endl;
        j++;
    }

    return 0;
}