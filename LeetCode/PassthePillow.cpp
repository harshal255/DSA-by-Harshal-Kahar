#include <bits/stdc++.h>
using namespace std;

int passThePillow(int n, int time)
{
    vector<int> num;
    int iteration = time / n + 1;
    while (iteration)
    {
        for (int i = 0; i < n; i++)
        {
            num.push_back(i + 1);
        }
        cout << endl;

        if (time > n)
        {
            for (int i = n - 1; i > 1; i--)
            {
                num.push_back(i);
            }
        }
        cout << endl;
        iteration--;
    }

    for (auto ele : num)
    {
        cout << ele << " ";
    }
    cout << endl;
    iteration = time / n + 1;
    int ans = num[n - iteration];
    return ans;
}

int main()
{
    int n;
    int t;
    cin >> n >> t;
    cout << passThePillow(n, t);

    return 0;
}