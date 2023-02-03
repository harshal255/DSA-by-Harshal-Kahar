#include <bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = float>
class myClass
{
public:
    T1 a;
    T2 b;
    myClass(T1 x, T2 y) // Constructor shouldn't have void or any arguments
    {
        // In the constructor, you need to assign values to 'a' and 'b' directly, not using 'this' pointer.
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The first value " << a << " & second value is " << b << endl;
    }
};

int main()
{
    myClass<> obj(5, 6.5);                        //-->for default Datatype
    myClass<float, string> obj1(55.6, "Harshal"); //-->for default Datatype
   
    obj.display();
    obj1.display();

    return 0;
}