#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
}

int main()
{
    vector<char> vec;
    int n;

    cin >> n;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        char element;
        cin >> element;
        vec.push_back(element);
    }
    cout << endl;
    for (auto ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl;
    reverseString(vec);
    cout << "Reverse : ";
    for (auto ele : vec)
    {
        cout << ele << " ";
    }

    return 0;
}