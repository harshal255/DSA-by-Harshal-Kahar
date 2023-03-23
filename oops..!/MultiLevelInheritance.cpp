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

class Dog : public Animal
{
};

class BlackDog : public Dog
{
};

int main()
{
    BlackDog b;
    b.speak();

    return 0;
}