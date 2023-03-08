#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long product = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            product *= arr[i];
        }
        cout << endl;
        // cout << product << endl;
        int leastSignificantDigit = product % 10;
        // cout << leastSignificantDigit << endl;

        if (leastSignificantDigit == 2 || leastSignificantDigit == 5 || leastSignificantDigit == 5)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}