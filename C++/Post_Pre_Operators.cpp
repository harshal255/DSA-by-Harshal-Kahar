#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1)
    // int a, b = 1;
    //  a = 10;
    //  if (++a)
    //  {
    //      cout << b;
    //  }
    //  else
    //  {
    //      cout << ++b;
    //  }
    //  2)
    // int a = 1;
    // int b = 2;
    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage 1 - Inside if ";
    // }
    // else
    // {
    //     cout << "Stage 2- Inside else";
    // }
    // cout << a << " " << b << endl; // 0& 3

    // 3)
    //  int number = 3;
    //  cout << (25 * (++number)); // 100
    // 4)
    // int a = 1;
    // int b = a++; // first print 1 & after increment 2
    // int c = ++a; // 3
    // cout << b;   //-->1
    // cout << c;   // 3

    // 5)
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2) // a=1 & after 0 & b= 2;
    {
        cout << "Stage1 - Inside If ";
    }
    else
    {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl; // 0 & 2 if operator uses is && then output will be 0 & 3

    return 0;
}