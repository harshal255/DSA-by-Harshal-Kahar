#include<iostream>
using namespace std;
//int factorial(int n){
//    if(n<=1){
//        return 1;
//    }
//    else
//    {
//        return n*factorial(n-1);
//    }
//}
int fibonacci(int n){
    //1,1,2,3,5,8
    if(n<=2){
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

//int main(){
//    int a;
//    //factorial of the number
//    cout<<"Enter a number"<<endl;
//    cin>>a;
//    cout<<"the fectorial "<<a<<" is "<< 
//    factorial(a)<<endl;
//    return 0;
//}
int main(){
    int a;
    //factorial of the number
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"the fibonacci num "<<a<<" is "<< fibonacci(a)<<endl;
    return 0;
}