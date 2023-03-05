#include <bits/stdc++.h>
using namespace std;

// O(n^2)
//  int findDuplicate(vector<int> &arr)
//  {
//      vector<int> second;
//      int n = arr.size();
//      sort(arr.begin(), arr.end());
//      int count1 = 0, count2 = 0;
//      for (int i = 0; i < n; i++)
//      {
//          count1 += arr[i];
//          if (arr[i] != arr[i + 1])
//              second.push_back(arr[i]);
//      }
//      cout << endl;

//     for (auto i : second)
//     {
//         count2 += i;
//         }
//     int duplicate = count1 - count2;
//     return duplicate;
// }

// o(n)
int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
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
    cout << endl
         << " Your array is : ";

    for (auto ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << findDuplicate(v);

    return 0;
}