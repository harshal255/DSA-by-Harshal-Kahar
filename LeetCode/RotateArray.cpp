#include <bits/stdc++.h>
using namespace std;

int rotate(vector<int> &nums, int k)
{

    int n = nums.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = nums[i];
    }
    nums = ans;
}

int main()
{
    vector<int> v;
    int n, k;
    cin >> n >> k;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    rotate(v, k);
    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}