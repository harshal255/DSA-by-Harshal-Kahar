#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < N; i++)
        {

            if (A[i] > max)
            {
                max = A[i];
            }
            if (A[i] < min)
            {
                min = A[i];
            }
        }
        // cout << "The max & min element of array is : " << max << " and " << min << endl;
        // cout << "The Sum of max & min is " << max + min << endl;
        return min + max;
    }
};

int main()
{
    int a;
    cout << "Enter size of array ";

    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter elements " << i + 1 << " ";
        cin >> arr[i];
    }

    // cout << "Your array is " << endl;
    // for (int i = 0; i < a; i++)
    // {

    //     cout << arr[i] << " ";
    // }

    cout << endl;
    Solution harshal;
    cout << harshal.findSum(arr, a);

    return 0;
}