#include <bits/stdc++.h>
using namespace std;
class Hero
{

    // properties
private:
    int health;

public:
    Hero()
    {
        cout << "Default (user defined  not system Constructor Called " << endl;
    }
    Hero(int health)
    {
        cout << "Parameterize Constructor Called" << endl;
        cout << this << endl;
        (*this).health = health;
    }
    Hero(int health, char level)
    {
        cout << "Double parameterize constructor called" << endl;
        this->health = health;
        this->level = level;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    char level;

    void print()
    {
        cout << "Health is " << this->health << endl;
        cout << "Level is " << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char c)
    {
        level = c;
    }

    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};

int main()
{
    // static allocation
    Hero harshal(150); // automatically destructor called
    // harshal.health = 70;
    harshal.level = 'A';

    // cout << "Health is: " << harshal.health << endl;
    harshal.setHealth(70);
    cout << "Health is: " << harshal.getHealth() << endl;
    cout << "Level is : " << harshal.level << endl;

    cout << "Address of harshal object " << &harshal << endl;

    // create object dynamically
    Hero *h = new Hero(900, 'a'); // manually destructor call
    // h->setHealth(90);
    // h->level = 'h';
    // cout << "Level is " << (*h).level << endl;
    // cout << "Health is " << (*h).getHealth() << endl;
    // cout << "Level is " << h->level << endl;
    // cout << "Health is " << h->getHealth() << endl;

    h->print();
    // copy constructor
    Hero *i = new Hero(*h);
    i->print();
    delete h, i;

    return 0;
}