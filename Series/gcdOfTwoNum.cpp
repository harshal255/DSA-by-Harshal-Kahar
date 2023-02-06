#include <bits/stdc++.h>
using namespace std;

// Euclid Algorithm;

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    cout << a;
    // return a;
}
int findLCM(int a, int b)
{
    int lcm;
    int gcd = findGCD(a, b);
    int multiplication = a * b;
    lcm = multiplication / gcd;

    return lcm;
}

int main()
{
    int a, b;
    cin >> a >> b;
    findGCD(a, b);
        // cout << findLCM(a, b) << endl;

        return 0;
}