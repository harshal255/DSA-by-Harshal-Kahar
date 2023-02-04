#include <bits/stdc++.h>
using namespace std;

// Kadane's algorithm.

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currSum = max(currSum + nums[i], nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    vector<int> v;

    int n;
    cout << "size of vector : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    // for (auto ele : v)
    // {
    //     cout << ele << " ";
    // }
    cout << endl;
    cout << maxSubArray(v);

    return 0;
}