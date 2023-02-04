#include <bits/stdc++.h>
using namespace std;

void Swap(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;
}

string reverseWord(string str)
{
    int n = str.length();
    // cout << n;

    for (int i = 0; i < n / 2; i++)
    {
        Swap(str[i], str[n - i - 1]);
        // cout << str[i];
    }

    cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i];
    // }

    return str;
}

int main()
{

    string StringArray;
    cout << "Enter String ";
    cin >> StringArray;
    string str(StringArray);

    cout << reverseWord(StringArray) << endl;

    return 0;
}
