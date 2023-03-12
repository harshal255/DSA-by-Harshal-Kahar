#include <bits/stdc++.h>
using namespace std;

string fly(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << "pre" << i << endl;
        if (n == pow(2, i))
        {
            return "YES";
        }

       
    }
    return "NO";
}

int main()
{

    int n;
    cin >> n;
    cout << fly(n);

    return 0;
}