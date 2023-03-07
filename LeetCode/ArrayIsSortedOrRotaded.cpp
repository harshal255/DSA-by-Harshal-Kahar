// false

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        if (nums[i] > max)
        {
            max = nums[i];
        }
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    cout << min << " " << max;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        // cout << nums[i] << "," << nums[n-1] << "  ";
        if (nums[i] == nums[n - 1])
        {
            
            return false;
        }
        if (nums[i] > nums[n - 1])
        {
            if (nums[i] > nums[min])
            {
                return true;
            }
            if (nums[min + 1] < nums[n - 1])
            {
                return true;
            }
        }
       
    }
    cout << endl;
    return false;
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
    cout << check(v);

    return 0;
}