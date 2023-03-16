#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    // create a reference variable
    int &j = i;
    cout << i << " " << j << endl;
    j++;
    cout << i << " " << j << endl;

    return 0;
}