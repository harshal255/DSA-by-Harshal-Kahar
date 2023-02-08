#include <bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    if (strs.size() == 0) return ans;

    for (int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || c != strs[j][i]) 
                return ans; 
        }

        ans += c; 
    }

    return ans; 
} 

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    // for (auto element : v)
    // {
    //     cout << element << " ";
    // }
    cout << longestCommonPrefix(v);

    return 0;
}