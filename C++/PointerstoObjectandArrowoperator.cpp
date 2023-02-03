#include <bits/stdc++.h>
using namespace std;

class Complex
{

    int imaginary, real;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    int setData(int a, int b)
    {
        imaginary = a;
        real = b;
    }
};

int main()
{

    Complex a;
    Complex *pointer = &a;
    (*pointer).setData(5, 8);
    (*pointer).getData();

    // arrow operator : The arrow operator is commonly used with pointers to objects of class type, which are used to represent objects in an object-oriented programming language. The arrow operator is also used to access members of dynamically allocated objects, as in the example above.

    pointer->setData(5, 9);
    pointer->getData();

    // Array of object (more confuse part)
    Complex *pointer1 = new Complex[4]; //  array of pointers which is points to the objects
    pointer1->setData(50, 99);
    pointer1->getData();

    delete pointer1;
    delete pointer;

    return 0;
}