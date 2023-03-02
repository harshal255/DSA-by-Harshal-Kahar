#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int i = 1, j = 1;
    while (j <= n)
    {
        while (i <= n)
        {
            cout << j << " ";
            i++;
        }
        i = 1;
        cout << endl;
        j++;
    }

    return 0;
}