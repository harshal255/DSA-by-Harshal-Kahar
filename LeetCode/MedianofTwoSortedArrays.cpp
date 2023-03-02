#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> merge;
    for (auto ele : nums1)
    {
        merge.push_back(ele);
    }
    for (auto ele : nums2)
    {
        merge.push_back(ele);
    }
    sort(merge.begin(), merge.end());
    // for (auto ele : merge)
    // {
    //     cout << ele << " ";
    // }
    double m;
    int n = merge.size();
    if (n % 2 == 1)
    {
        m = merge[((n + 1) / 2) - 1];
        // cout << m;
    }
    else
    {
        m = (merge[(n / 2) - 1] + merge[(n / 2)]) / 2.0;
        // cout << m;
    }
    return m;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> v1, v2;
    for (int i = 0; i < n1; i++)
    {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }
    cout << endl;
    for (int i = 0; i < n2; i++)
    {
        int ele;
        cin >> ele;
        v2.push_back(ele);
    }
    cout << endl;
    // for (auto ele : v1)
    // {
    //     cout << ele << " ";
    // }
    // cout << endl;
    // for (auto ele : v2)
    // {
    //     cout << ele << " ";
    // }
    cout << findMedianSortedArrays(v1, v2);

    return 0;
}