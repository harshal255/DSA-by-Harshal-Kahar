#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a; // if i writen a=a then throws garbage value(this->a = global variable a). c++ language high prior local variable
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{

    A a;
    a.setData(4);
    a.getData();

    return 0;
}