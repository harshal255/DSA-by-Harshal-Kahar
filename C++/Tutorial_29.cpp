#include<iostream>
using namespace std;

class Complex {
    int a,b;

    public:
    //create a constructure 
    //constructure is a special member function with the same same as of the class.
    //it is used to intialize the objects of its class 
    //it is automatically invoked whenever an object is created
    Complex(void); //Constructuctor declaration

    void printNumber(){
        cout<<"Your number is "<< a <<"+"<< b <<"i"<<endl;
    }
};
Complex ::Complex(void){
    a=10;
    b=20;
}
int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
//Properties of constructures
//1.it should be declared in the public section of the class
//2. they are autometically invoked whenever the object is created.
//3. they can not return values & do not have return types
//4. it can default arguments.
//5. we can not refer to their address



    
    
