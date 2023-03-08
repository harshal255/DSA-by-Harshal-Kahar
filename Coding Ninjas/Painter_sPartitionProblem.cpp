#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid)
{
    int painters = 1;
    int partitionSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        // cout << "partitionSum " << partitionSum << "arr[i] " << arr[i] << endl;
        if (partitionSum + arr[i] <= mid)
        {
            partitionSum += arr[i];
            cout << "partitionsum" << partitionSum << endl;
        }
        else
        {
            painters++;
            cout << "painters" << painters << endl;
            if (painters > k || arr[i] > mid)
            {

                return false;
            }
            partitionSum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for (auto ele : boards)
    {
        sum += ele;
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    cout << "mid" << mid << endl;
    int ans = 0;

    while (s <= e)
    {
        if (isPossible(boards, k, mid))
        {
            cout << "Left Side" << endl;
            // left side
            ans = mid;
            e = mid - 1;
        }
        else
        {
            cout << "Right Side" << endl;
            // right side
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
        cout << "update mid" << mid << endl;
    }
    return ans;
}

int main()
{

    vector<int> v;
    int n;
    int k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "ans" << findLargestMinDistance(v, k);

    return 0;
}