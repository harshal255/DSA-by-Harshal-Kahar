#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    // cout << "I am Vector Function";
    vector<int> shuffleArray(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int newPosition;
        int currentNum = nums[i];
        if (i < n)
        {
            newPosition = 2 * i; // while i is current postion;
            // cout << newPosition << " ";
        }

        else
        {
            newPosition = 2 * (i - n) + 1;
            // cout << newPosition << " ";
        }
        shuffleArray[newPosition] = currentNum;
    }
    cout << endl;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << shuffleArray[i] << " ";
    // }

    return shuffleArray;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
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
    shuffle(v, n / 2);
    // vector<int> result = shuffle(v, n / 2);

    return 0;
}