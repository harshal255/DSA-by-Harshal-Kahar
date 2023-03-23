#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << " I am A " << endl;
    }
};
class B
{
public:
    void func1()
    {
        cout << " I am B " << endl;
    }
};

class C : public A, public B
{
public:
    void func1()
    {
        cout << " I am C " << endl;
    }
};

int main()
{
    C obj;
    obj.func1();//cann't access
    //  How to access that method --> using scope resolution operator

    obj.B::func1();
    obj.A::func1();
   

    return 0;
}