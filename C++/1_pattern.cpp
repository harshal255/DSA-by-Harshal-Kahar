#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    int j = 0;
    while (j < n)
    {
        // rows

        while (i < n)
        {
            // cols
            cout << "* ";
            i++;
        }
        i = 0;
        cout << endl;
        j++;
    }

    return 0;
}