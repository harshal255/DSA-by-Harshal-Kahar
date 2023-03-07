#include <bits/stdc++.h>
using namespace std;

int sqrtN(long long int N)
{
    int s = 0;
    int e = N;
    long long mid = s + (e - s) / 2;
    long long ans;
    while (s <= e)
    {
        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            cout << "j" << j << endl;
            ans = j;
            cout << "ans" << ans << endl;
        }
        cout << endl;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int tempSol = sqrtN(n);
    cout << tempSol << endl;
    cout << "Answer is " << morePrecision(n, 6, tempSol) << endl;

    return 0;
}