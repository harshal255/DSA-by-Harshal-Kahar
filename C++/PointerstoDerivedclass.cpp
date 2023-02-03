#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{

    // The function “display” is called using a base class pointer. The main thing to note here is that the base class “display” function will run here.
    // The function “display” is called using a derived class pointer. The main thing to note here is that the derived class “display” function will run here.

    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    cout << "Base Class Pointer & display method" << endl;
    cout << "\n";
    base_class_pointer->display();
    cout << "\n";

    base_class_pointer->var_base = 3400; // point another value
    cout << "Base Class Pointer & display method" << endl;
    cout << "\n";
    base_class_pointer->display();
    cout << "\n";

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;   // derived_class_pointer stores address of object(derived class)
    derived_class_pointer->var_base = 9448; // derived class pointer can change base classes variable
    derived_class_pointer->var_derived = 98;
    cout << "Derived Class Pointer & display method" << endl;
    cout << "\n";
    derived_class_pointer->display();

    return 0;
}
