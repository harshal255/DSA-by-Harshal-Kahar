#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); i++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

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

    moveZeroes(v);
    for (auto ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}