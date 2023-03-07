#include <bits/stdc++.h>
using namespace std;

// for pivot element
int pivotIndex(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[mid] >= nums[0])
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

int binarySearch(vector<int> &nums, int s, int e, int target)
{

    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            // left side

            end = mid - 1;
        }
        else
        {
            // right side

            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{

    int pivot = pivotIndex(nums); //--index of pivot element
    cout << pivot << endl;
    if (target >= nums[pivot] && target <= nums[nums.size() - 1])
    {
        cout << "Min Partition" << endl;
        // apply small partition of B.S.
        // int s = pivot;
        // int e = nums.size() - 1;
        // int mid = s + (e - s) / 2;
        return binarySearch(nums, pivot, nums.size() - 1, target);
    }
    else
    {
        // apply max partition of B.S.
        // cout << "Max Partition" << endl;
        // int s = 0;
        // int e = pivot - 1;
        // int mid = s + (e - s) / 2;
        return binarySearch(nums, 0, pivot - 1, target);
    }
    return -1;
}

int main()
{
    vector<int> v;

    int n;

    cin >> n;

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
    int t;
    cin >> t;
    cout << endl;
    cout << search(v, t);

    return 0;
}