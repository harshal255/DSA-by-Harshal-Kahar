#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 0;
        while (i < n)
        {
            int j = 0;
            while (j < n - i)
            {
                if (i % 2 == 0)
                {
                    cout << "1 ";
                    j++;
                }

                else
                {
                    cout << "0 ";
                    j++;
                }
            }
            cout << endl;
            i++;
        }
    }
}

int main()
{
    int n;
    // cin >> n;
    printPatt(n);

    return 0;
}