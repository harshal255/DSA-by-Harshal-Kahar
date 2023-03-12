// false

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cout << count << endl;
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    cout << count << endl;

    return count <= 1; //(count = 0(for each element equal) or 1)
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