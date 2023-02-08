#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> &a, int index)
{
    if (index == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = index; i < a.size(); i++)
    {
        swap(a[i], a[index]);
        permute(a, index + 1);
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    permute(a, 0);
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}