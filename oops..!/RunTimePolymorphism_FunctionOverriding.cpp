#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking...";
    }
};
class Dog : public Animal
{
public:
    // change function implementation
    void speak()
    {
        cout << "Dog barking..." << endl;
        cout << "Function Overriding" << endl;
    }
};

int main()
{
    Animal obj1;
    obj1.speak();
    cout << endl;
    Dog obj2;
    obj2.speak();

    return 0;
}