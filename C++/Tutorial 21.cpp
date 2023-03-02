#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;   

public:
    void read(void);
    void chk_bin(void);
   // void ones(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!= '0' && s.at(i)!= '1')
        {
            cout << "incorrect binary format" << endl;
        }
        exit(0);
    }
}

int main()
{
    // OOPs --> Classes & objects
    // C++ --> initially called --> c with classes by strousroup
    // class --> extension of structures ( in C )
    // stuctures had limitations
    //----> members are public
    //----> No methods
    //classes ---> structures + more
    //classes --> can have methods & properties
    //classes --> can make few mwmbers as private & few as public
    // stuctures in c++ are typedef
    // you can declare objects along with the class declarion like this:
    /*class Employee{
        class definition
    } harshal, darshan,tushar;*/
    binary b;
    b.read();
    b.chk_bin();

    return 0;
}