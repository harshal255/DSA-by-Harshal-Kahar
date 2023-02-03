#include <bits/stdc++.h>
using namespace std;

class Student
{
public: // by default private
    float swapOne(float x, float y)
    {

        // this method working while anything condition

        x = x + y;
        y = x - y;
        x = x - y;

        cout << "the value of x is " << x << " and y is " << y << endl;
    }

    int swapTwo(int x, int y)
    {
        // this method valid for only variable is integer
        x ^= y;
        y ^= x;
        x ^= y;

        cout << "the value of x is " << x << " and y is " << y << endl;
    }
};
int main()
{
    float a, b;
    cout << "enter first value" << endl;
    cin >> a;
    cout << "enter 2nd value" << endl;
    cin >> b;

    Student s; // s is a object of class Student
    s.swapOne(a, b);
    s.swapTwo(a, b);
}