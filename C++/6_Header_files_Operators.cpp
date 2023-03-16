
//there are 2 types header files
//1. system header files: it comes with the compiler 
#include<iostream>
// 
//2. user defined header files: it is written by programmer
// #include "this.h" 
using namespace std;
int main(){
    int a=4,b=5;

    //cout<<"This is hello word program \n";
   // cout<<"My name is harshal \n";
   // cout<<"operators in c++:"<<endl;
   // cout<<"following are the type of operators in c++"<<endl;
    //arithmetic operators
    cout<<"The value of sum is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of division is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    cout<<"the value of a==b is"<<(a==b)<<endl;
    cout<<"the value of a!=b is"<<(a!=b)<<endl;
    cout<<"the value of a>=b is"<<(a>=b)<<endl;
    cout<<"the value of a<=b is"<<(a<=b)<<endl;
    cout<<"the value of a>b is"<<(a>b)<<endl;
    cout<<"the value of a<b is"<<(a<b)<<endl;






    return 0;
}