#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    int ans = 2;
    int previousDiff = a[1] - a[0];
    int j = 2;
    int current = 2;

    for (j; j < n; j++)
    {
        if (previousDiff == a[j] - a[j - 1])
        {
            current++;
        }
        else
        {
            previousDiff = a[j] - a[j - 1];
            current = 2;
        }
        ans = max(ans, current);
    }
    cout << ans;

    return 0;
}