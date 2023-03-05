#include <bits/stdc++.h>
using namespace std;

int splitNum(int num)
{
    string str = to_string(num);

    sort(str.begin(), str.end());
    string num1 = "", num2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
        {
            num1 += str[i];
        }
        else
        {
            num2 += str[i];
        }
    }
    int n1 = stoi(num1);
    int n2 = stoi(num2);
    return n1 + n2;
}

int main()
{
    int n;
    cin >> n;
    cout << splitNum(n);

    return 0;
}