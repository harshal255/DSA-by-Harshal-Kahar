#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"using function with 2 arguments "<<endl;
    return a+b;
}

int sum(int a,int b, int c){
    cout<<"Using function with 3 arguments "<<endl;
    return a+b+c;
}
//calculate the volume of a cylinder
const float pi=3.1415;
float vol(double r,int h){
    return pi*r*r*h;
}

int main(){
    cout<<"The sum of 3 & 5 is "<<sum(3,5)<<endl;
    cout<<"The sum of 7,8 and 9 is "<<sum(7,8,9)<<endl;
    cout<<"the valume of cylinder with radius is 3 & hight is 4:"<<vol(3,4)<<endl;
    return 0;
}