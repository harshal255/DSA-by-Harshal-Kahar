#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Hello Harshal Kahar";
    // Opening files using constructor and writing it
    ofstream out("textfile.txt"); // Write operation
    out << st;

    return 0;
}
