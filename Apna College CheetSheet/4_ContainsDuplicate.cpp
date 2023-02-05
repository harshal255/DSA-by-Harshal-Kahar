#include <bits/stdc++.h>
using namespace std;

// bool containsDuplicate(vector<int> &nums)
// {
//     // time complexity is o(n^2);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             // cout << nums[i] << " & " << nums[j] << endl;
//             if (nums[i] == nums[j])
//             {
//                 return true;
//             }
//         }
//     }
// }
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> set;
    int duplicate = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        // count is a member function of the C++ Standard Template Library (STL) container class std::unordered_set (and also std::set). It returns the number of elements in the container with the given key. If the key is present in the container, it returns 1, otherwise it returns 0.
        if (set.count(nums[i]))
        {
            
            return true;
        }

        // insert is a member function of the C++ Standard Template Library (STL) container classes std::set and std::unordered_set. It inserts an element into the set if it does not already exist.
        set.insert(nums[i]);
    }
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
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << containsDuplicate(v);

    return 0;
}