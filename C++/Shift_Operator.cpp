#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3 << 2; // left shift 2 --> 3*2^2
    // 0000....0011-->3
    // 0000....1100-->12
    cout << a << endl;

    int b = 15 >> 2; // right shift 3 -->15/2^2
    // 0000...1111-->15
    // 0000...0011-->3
    cout << b << endl;

    int c = 17 >> 1; // c=17/2^1 = 8
    cout << c << endl;

    return 0;
}