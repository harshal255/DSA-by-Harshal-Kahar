#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 0;

    while (j < n)
    {
        int i = 1;
        while (i <= n)
        {
            cout << (char)(65 + j) << " ";
            i++;
        }
        cout << endl;
        j++;
    }

    return 0;
}