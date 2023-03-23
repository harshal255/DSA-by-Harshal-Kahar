#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog
{
public:
    void baw()
    {
        cout << "baw baw " << endl;
    }
};

class BlackDog : public Animal, public Dog
{
};

int main()
{
    BlackDog b;
    b.speak();
    b.baw();

    return 0;
}