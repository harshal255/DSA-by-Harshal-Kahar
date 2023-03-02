/*#include <iostream>
using namespace std;
class Simple{
    int data1 , data2;
    

    Public :

        Simple(int a, int b=3, int c=6){

        data1 = a;
        data2 = b;
        
    }
    void printData();

};
    
void Simple :: printData(){
    cout<< "The value of data1,data2 & data3 are" << data1 << "," << data2 <<endl;
}

int main()
{
    Simple s(3, 5);
    s.printData();
    Simple s2(6);
    s2.printData();

    return 0;
}*/
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a,int b=9,int c=5){
            data1=a;
            data2=b;
            data3=c;
        }
    void printData();
};
void Simple :: printData(){
    cout<<"the value of data1 & data2 are "<<data1<<" , "<<data2<<" & "<<data3<<endl;
}


int main(){
    Simple s1(6,7);
    s1.printData();
    return 0;
    
}