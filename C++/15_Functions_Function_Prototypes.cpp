#include<iostream>
using namespace std;

struct info
{
    int percentage;
    char favchar;
    long long int mobile_num;
    int id;
};

int main(){
    struct info harshal;
    struct info prajval;
    
    harshal.percentage=85;
    harshal.favchar= 'h';
    harshal.mobile_num=9537407968;
    prajval.percentage=84;
    prajval.id=1;
    cout<<"the value of percentage "<<harshal.percentage<<"%"<<endl;
    cout<<"the favourite character "<<harshal.favchar<<endl;
    cout<<"the mobile no is "<<harshal.mobile_num<<endl;
    cout<<"the value of percentage is "<<prajval.percentage<<"%"<<endl;
    cout<<"the valuevis "<<prajval.id<<endl;
    
     return 0;
}