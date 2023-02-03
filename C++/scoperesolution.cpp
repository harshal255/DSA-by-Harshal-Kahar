#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100]; // let us assume show containes totle items of 100
    int counter;

public:
    void initCounter(void) // declares a function named "initCounter" that takes no parameters. can write initCounter() as well
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)

// The "::" operator in C++ is called the scope resolution operator. It is used to specify the scope of a name, and access the members of a class or namespace, either globally or locally within a program. For example, it can be used to access class members, static members, and namespaces.
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter]; // initially counter 0
    cout << "Enter Price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop dukan;
    dukan.initCounter(); // initiallize Counter value of 0 unless throws garbage value
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}