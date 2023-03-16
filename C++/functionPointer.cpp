#include <bits/stdc++.h>
using namespace std;

void print(int *p)
// if i give address but this function take that addresses value
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 5;
}

void updateusingaddress(int &p)
{
    p = p + 5;
}

int main()
{
    int val = 50;
    int *p = &val;
    cout << "Before " << *p << endl;
    update(p);
    cout << "After " << *p << endl;

    cout << "Before " << val << endl;
    updateusingaddress(val);
    cout << "After " << val << endl;
    return 0;
}