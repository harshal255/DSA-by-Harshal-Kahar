#include <bits/stdc++.h>
using namespace std;

void solve(string s, string output, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // exclude
    solve(s, output, index + 1, ans);

    // include
    char element = s[index];
    output.push_back(element);
    solve(s, output, index + 1, ans);
}

vector<string> subsequences(string s)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(s, output, index, ans);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans;
    ans = subsequences(s);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}