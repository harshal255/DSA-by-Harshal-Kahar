#include <bits/stdc++.h>
using namespace std;

bool isEqual(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    // character count store
    int arr[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // travels s2 string with s1 size;
    int arr1[26] = {0};
    int i = 0;
    int windowSize = s1.size();
    // running for first window
    while (i < windowSize && i < s2.size())
    {
        int index = s2[i] - 'a';
        arr1[index]++;
        i++;
    }
    if (isEqual(arr, arr1))
    {
        return 1;
    }

    while (i < s2.length() )
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        arr1[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        arr1[index]--;
        i++;

        // for (auto ele : arr)
        // {
        //     cout << ele << " ";
        // }
        // cout << "\t";
        // for (auto ele : arr1)
        // {
        //     cout << ele << " ";
        // }
        // cout << endl;
        if (isEqual(arr, arr1))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << checkInclusion(s1, s2);

    return 0;
}