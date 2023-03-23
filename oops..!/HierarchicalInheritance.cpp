#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Function 1 Called " << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Function 2 Called ";
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Function 3 called ";
    }
};

int main()
{

    A obj1;
    obj1.func1();
    cout << endl;

    B obj2;
    obj2.func1();
    obj2.func2();
    cout << endl
         << endl;

    C obj3;
    obj3.func1();
    obj3.func3();
    cout << endl;

    return 0;
}