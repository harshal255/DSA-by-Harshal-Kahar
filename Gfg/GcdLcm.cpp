#include <bits/stdc++.h>
using namespace std;
vector<long long> lcmAndGcd(long long a, long long b)
{
    long long multi = a * b;
    cout << multi << endl;

    while (b != 0)
    {
        long long reminder = a % b;
        a = b;
        b = reminder;
    }
    cout << "GCD is " << a << endl;
    long long int gcd = a;

    long long lcm = multi / gcd;

    vector<long long> Ans;
    Ans.push_back(lcm);
    Ans.push_back(gcd);
    // for (int i = 0; i < Ans.size(); i++)
    // {
    //     cout << Ans[i] << " ";
    // }

    return Ans;
}

int main()
{

    long long a, b;
    cin >> a >> b;
    lcmAndGcd(a, b);

    return 0;
}