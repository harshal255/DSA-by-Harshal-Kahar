#include <bits/stdc++.h>
using namespace std;

int callbyValueIncrement(int num)
{

    // Call by value is a method of passing arguments to a function in programming where the function receives the values of the variables, rather than the variables themselves. This means that any changes made to the arguments within the function will not affect the original variables outside of the function.
    num++;
    return num;
}
int callbyReferenceIncrement(int *pointer)
{

    // Call by reference is a method of passing arguments to a function in programming where the function receives a reference to the variables, rather than the values themselves. This means that any changes made to the arguments within the function will affect the original variables outside of the function, as they both refer to the same memory location.
    (*pointer)++;
    return *pointer;
}

int main()
{

    cout << "Call by value" << endl;
    int a = 2;
    cout << callbyValueIncrement(a) << endl;
    cout << a << endl;

    cout << "Call by reference" << endl;

    int b = 2;
    int *point;
    point = &b;
    cout << callbyReferenceIncrement(point) << endl;
    cout << b;

    return 0;
}