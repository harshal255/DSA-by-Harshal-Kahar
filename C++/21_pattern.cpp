#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 1;
    while (j <= n)
    {
        // Print space
        int space = n - j;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // Print 1st triangle
        int i = 1;
        while (i <= j)
        {
            cout << i;
            i++;
        }
        // Print second triangle
        int start = j - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        j++;
    }

    return 0;
}