#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
double average(T1 a, T2 b)
{
    double c = (a + b) / 2.0;
    return c;
}

int main()
{
    int a = average(5, 8);

    cout << "The average of those two integer number is :" << a << endl;

    float b = average(5, 8);
    cout << "The average of those two float number is :" << b << endl;

    return 0;
}