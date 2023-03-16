#include<iostream>
using namespace std;

class Conplex{
    int a,b;
    public:
        void setNUmber(int n1, int n2){
            a=n1;
            b=n2;
            }
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(Complex o1,Complex o2){
        return (o1.a + o2.a);
    }
};

int main(){
    
    return 0;
}