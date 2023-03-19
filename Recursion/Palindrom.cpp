#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(string s, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }
    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
        return checkPalindrom(s, i + 1, j - 1);
    }
}

int main()
{
    string s = "aabba";
    cout << endl;
    bool isPalindrom = checkPalindrom(s, 0, s.size() - 1);
    cout << isPalindrom << endl;

    return 0;
}