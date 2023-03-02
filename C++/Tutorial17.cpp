#include<iostream>
using namespace std;


int sum(int a, int b){
    int c=a+b;
    return c;
}
//void swap(int a,int b){
//    int temp=a;//4
//    a=b;//5
//    b=temp;//4

    void swap(int*a,int*b){
    int temp = *a;//4
    *a = *b;//5
    *b = temp;//4
    
}
int main(){
  int a=4,b=5;

    //The value of a "<<a<<endl;
    //The value of b "<<b<<endl;
    //cout<<"the sum of the a & b is "<<sum(a,b)<<endl;
    cout<<"the value of a is "<<a<<" & value of b is "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a is "<<a<<" & value of b is "<<b<<endl;
    return 0;
}