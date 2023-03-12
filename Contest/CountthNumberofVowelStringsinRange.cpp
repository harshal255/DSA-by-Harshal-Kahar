#include <bits/stdc++.h>
using namespace std;

int vowelStrings(vector<string> &words, int left, int right)
{
    int count = 0;
    for (int i = left; i <= right; i++)
    {
        string str = words[i];

        if ((str.at(0) == 'a' || str.at(0) == 'e' || str.at(0) == 'i' || str.at(0) == 'o' || str.at(0) == 'u') && (str.back() == 'a' || str.back() == 'e' || str.back() == 'i' || str.back() == 'o' || str.back() == 'u'))
        {
            count++;
        }
    }
    cout << endl;
    return count;
}

int main()
{
    vector<string> vec;
    int n;

    cin >> n;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        string element;
        cin >> element;
        vec.push_back(element);
    }
    cout << endl;
    for (auto ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl;
    int left, right;
    cin >> left >> right;

    cout << vowelStrings(vec, left, right);

    return 0;
}