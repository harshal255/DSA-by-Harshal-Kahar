#include <bits/stdc++.h>
using namespace std;

string ReverseSort(string str)
{

    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());

   
    return str;
}

int main()
{

    string NumeraicString;
    cout << "Enter String : ";
    getline(cin, NumeraicString);
    cout << ReverseSort(NumeraicString);

    return 0;
}