#include <bits/stdc++.h>
using namespace std;

void UpperLower(string str)
{
    string a = str;
    transform(str.begin(), str.end(), str.begin(), ::toupper); // 1&2 index contains whole string, 3rd parameter is startform & last parameter for trasform
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << str << endl;
    cout << a << endl;
}

void UpperCase(string str)
{
    // cout << 'A' - 'a' << endl; --> -32
    // cout << 'a' - 'A' << endl; --> 32
    //  convert Uppercase
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        cout << str[i];
    }

    cout << endl;
}

void LowerCase(string str)
{
    // for lowercase
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        cout << str[i];
    }
}

int main()
{

    string String;
    cout << "Enter String : ";
    getline(cin, String);
    // UpperCase(String);
    // LowerCase(String);
    UpperLower(String);

    return 0;
}