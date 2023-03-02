#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    set<int> s;
    set<int>::iterator it;

    for (int i = 0; i < nums.size(); ++i)
    {
        s.insert(nums[i]);
    }

    // for (it = s.begin(); it != s.end(); ++it)
    // {
    //     cout << *it << ' ';
    // }
    nums.clear();

    for (auto i : s)
    {

        nums.push_back(i);
    }

    // for (auto ele : nums)
    // {
    //     cout << ele << " ";
    // }
    return nums.size();
}

int main()
{

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    cout << removeDuplicates(v);

    return 0;
}