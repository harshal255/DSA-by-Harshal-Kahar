#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long reverse_num;
    if (x < 0)
    {
        x = abs(x);
        string s = to_string(x);
        reverse(s.begin(), s.end());
        reverse_num = (-1) * stoll(s);
        if (reverse_num < INT_MIN ||
            reverse_num > INT_MAX)
        {
            reverse_num = 0;
        }
        return reverse_num;
    }
    else
    {
        string s = to_string(x);
        reverse(s.begin(), s.end());
        reverse_num = stoll(s);
        if (reverse_num < INT_MIN ||
            reverse_num > INT_MAX)
        {
            reverse_num = 0;
        }
        return reverse_num;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);

    return 0;
}