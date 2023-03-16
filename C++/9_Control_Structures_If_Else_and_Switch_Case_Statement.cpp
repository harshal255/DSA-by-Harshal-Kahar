#include<iostream>
using namespace std;
int main(){
    //selection control structure: switch case statements.
    int age;
    cout<<"tell me yr age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18.."<<endl;
        break;
    case 22:
        cout<<"you are a 22"<<endl;
        break; 
    case 25:
        cout<<"you are 25.."<<endl;
        break;
    case 50:
        cout<<"you are a 50"<<endl;     
        break;
    default:
    cout<<"no special cases";
        break;
    }



    return 0;
}