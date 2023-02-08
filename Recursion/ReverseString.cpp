#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string restOfString = s.substr(1); // first position & 2nd argument is length
    // cout << restOfString << " ";
    reverse(restOfString);
    cout << s[0];
}

int main()
{
    string s;
    cin >> s;
    reverse(s);

    return 0;
}