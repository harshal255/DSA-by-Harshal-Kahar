// Time Complexity: O(n* 2^n)
// Auxiliary Space: O(n)
#include <bits/stdc++.h>
using namespace std;
vector<string> subsequences(string str)
{

    int n = str.size();
    vector<string> ans;
    int N = pow(2, n); // (1<<n) == pow(2,n)
    for (int i = 1; i < N; i++)
    {
        string temp = "";

        for (int j = 0; j < n; j++)
        {
            if ((1 << j) & i)
            {
                temp.push_back(str[j]);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = subsequences(s);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
}