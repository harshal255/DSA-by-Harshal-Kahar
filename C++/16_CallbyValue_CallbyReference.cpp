#include<iostream>
using namespace std;

//int sum(int a,int b){
//    int c= a+b;
//    return c;
//}
int sum(int a , int b);

int main(){
    //n1 & n2 are actual parameters
    int n1,n2;
    cout<<"Enter n1 "<<endl;
    cin>>n1;
    cout<<"Enter n2 "<<endl;
    cin>>n2;
    cout<<"the sum is "<<sum(n1,n2)<<endl;
    return 0;
}

   int sum(int a, int b){  
       // formers parameters a & b will be taking values from actual parameters n1 & n2
   int c = a+b;
   return c;
   }
