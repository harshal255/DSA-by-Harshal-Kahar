#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str)
{
    string temp = "";
    for (auto ele : str)
    {
        if (ele == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(ele);
        }
    }
    return temp;
}

int main()
{

    string s;
    getline(cin, s);
    cout << replaceSpaces(s);

    return 0;
}