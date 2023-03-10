#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans;
    int i = 0;
    while (i < m)
    {
        ans.push_back(nums1[i]);
        i++;
    }

    for (auto ele : nums2)
    {
        ans.push_back(ele);
    }
    sort(ans.begin(), ans.end());
    nums1.clear();
    nums1 = ans;
}

int main()
{

    vector<int> v1;
    vector<int> v2;

    int m;
    int n;

    cin >> m >> n;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v2.push_back(element);
    }
    cout << endl;
    for (auto ele : v1)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << endl;
    merge(v1, m, v2, n);
    for (auto ele : v1)
    {
        cout << ele << " ";
    }

    return 0;
}