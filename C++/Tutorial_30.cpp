#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
/*Complex ::Complex(void){ //this is a default constructure 
    a=0;
    b=0;
}*/
Complex ::Complex(int x, int y) //this is a pparameterized constructure
{
    a = x;
    b = y;
}
int main()
{
    Complex a(4, 6); //implicit call
     a.printNumber();
    Complex b = Complex(5,7);
    b.printNumber();

    return 0;
}
