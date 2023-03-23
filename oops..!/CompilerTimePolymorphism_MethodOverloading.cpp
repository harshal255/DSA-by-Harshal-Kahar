#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Harshal " << endl;
    }

    void sayHello(string h)
    {
        cout << "Wahh, Compiler time polymorphism " << endl;
    }
    int sayHello(char name, int n)
    {
        cout << "Whenever we use same function in one class there must be different input argument then & then function overloaded...";
        return 5;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello('h', 10);

    return 0;
}