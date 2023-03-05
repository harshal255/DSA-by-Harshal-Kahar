#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
    string str = to_string(n);
    // cout << str;
    // cout << endl;
    int sum = 0;
    int product = 1;

    for (auto ele : str)
    {
        int int_ele = ele - '0'; // print same value of charater

        // cout << int_ele << " ";
        sum += int_ele;
        product *= int_ele;
    }
    int diff = abs(product - sum);
    return diff;
}

int main()
{
    int n;
    cin >> n;
    cout << subtractProductAndSum(n);

    return 0;
}