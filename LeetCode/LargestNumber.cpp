#include <bits/stdc++.h>
using namespace std;

string reverseBubble(string str)
{
    int n = str.length();
    // cout << n;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] < str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }

    return str;
}

string largestNumber(vector<int> &nums)
{
    string arrtoString = "";
    for (auto ele : nums)
    {
        arrtoString += to_string(ele);
        // cout << ele << "";
    }
    cout << reverseBubble(arrtoString) << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    // for (auto ele : v)
    // {
    //     cout << ele << " ";
    // }
    largestNumber(v);

    return 0;
}