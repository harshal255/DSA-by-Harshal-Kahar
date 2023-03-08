//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool isPossible(int arr[], int k, int mid, int n)
    {
        int painters = 1;
        long long partitionSum = 0;

        for (int i = 0; i < n; i++)
        {

            if (partitionSum + arr[i] <= mid)
            {
                partitionSum += arr[i];
            }
            else
            {
                painters++;

                if (painters > k || arr[i] > mid)
                {

                    return false;
                }
                partitionSum = arr[i];
            }
        }
        return true;
    }

    long long minTime(int arr[], int n, int k)
    {
        long long s = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        long long e = sum;
        long long mid = s + (e - s) / 2;

        long long ans = 0;

        while (s <= e)
        {
            if (isPossible(arr, k, mid, n))
            {

                // left side
                ans = mid;
                e = mid - 1;
            }
            else
            {

                // right side
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minTime(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends