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
            int count = i + j * n;

            if (count > 0 || count <= 9)
            {
                cout << setw(2) << setfill('0') << count << " ";
            }
            else
            {
                cout << count << " ";
            }

            // cout << i + j * n << " ";
            i++;
        }
        cout << endl;
        j++;
    }

    return 0;
}