#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    int n = arr.size();
    vector<int> freq;
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < n)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
               
            }
        }
        freq.push_back(count);
        i = i + count;
    }
    sort(freq.begin(), freq.end());
    cout << endl;
    for (int i = 1; i < freq.size(); i++)
    {
        if (freq[i - 1] == freq[i])
            return false;
    }
    return true;
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
    cout << endl;
    // for (auto ele : v)
    // {
    //     cout << ele << " ";
    // }
    cout << uniqueOccurrences(v);

    return 0;
}