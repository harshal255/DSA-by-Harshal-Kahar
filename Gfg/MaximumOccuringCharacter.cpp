#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{

    int arr[26] = {0};
    // create an array of count of character
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // lower case
        int number = 0;
        number = ch - 'a';
        // cout << number << endl;
        arr[number]++;
    }
    cout << endl;
    // for (auto ele : arr)
    // {
    //     cout << ele << " ";
    // }

    // find maximum occurence character
    int max = INT_MIN;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            // cout << ans << endl;
            max = arr[i];
            // cout << max << endl;
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    getline(cin, s);
    cout << getMaxOccuringChar(s);

    return 0;
}