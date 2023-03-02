#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 100000;
    int b = 100000;
    int c = a * b;
    cout << c << endl;
    cout << INT_MAX << endl;
    int mx = INT_MAX + 1;
    cout << mx << endl;

    long long d = a * 1LL * b;
    cout << d << endl;

    double x = 100000;
    double y = 100000;
    double z = x * y;
    cout << z << endl;                             // signtific calculation
    cout << fixed << z << endl;                    // numeric
    cout << fixed << setprecision(0) << z << endl; // numeric

    double h = 1e24;
    cout << h << endl; // number strored with double datatype but no accuracy
    unsigned long long i = 1e19;
    cout << i << endl;

    return 0;
}