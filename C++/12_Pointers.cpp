#include<iostream>
using namespace std;
// What is a pointer : data type which holds 
// the address of other data types
int main()
{
    int a=3;
    int*b=&a;

    // &--> (address of) operator
    // *--> derefrence operator
    cout<<"the address of a is :-"<<b<<endl;
    cout<<"the address of a is :-"<<&a<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"the address of b is:-"<<c<<endl;
    return 0;
}