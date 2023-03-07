#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
// pivot element = min element
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (nums[mid] >= nums[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "Your array is : ";

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << pivotIndex(v);

    return 0;
}