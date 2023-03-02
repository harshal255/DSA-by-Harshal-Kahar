#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
    void setValue(int value){
        data=value;
    }
    friend void add(X,Y);
       
};
class Y{
    int num;
    public:
    void setValue(int value){
        num=value;
    }
    friend void add(X,Y);
       
};
void add(X o1,Y o2){
    cout<<"sum data of X & Y objects given me "<< o1.data+o2.num;
}


int main(){
    X a1;
    a1.setValue(3);
    Y a2;
    a2.setValue(4);
    add(a1,a2);
    
    return 0;
}