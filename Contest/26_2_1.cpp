#include <bits/stdc++.h>
using namespace std;
vector<int> leftRigthDifference(vector<int> &nums)
{
    vector<int> RightArray;
    vector<int> final;
    vector<int> LeftArray;
    int leftSum = 0;
    int RightSum = 0;
    int n = nums.size();
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        RightArray.push_back(RightSum);
        LeftArray.push_back(leftSum);
        leftSum += nums[i];
        RightSum += nums[j];

        // cout << "leftSum= " << leftSum << " and "
        //      << "Rightsum " << RightSum << " ";
        // cout << endl;
    }

    reverse(RightArray.begin(), RightArray.end());

    for (int i = 0; i < n; i++)
    {
        int diff = abs(LeftArray[i] - RightArray[i]);

        final.push_back(diff);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << final[i] << " ";
    }

    return final;
}

int main()
{

    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    leftRigthDifference(v);

    return 0;
}