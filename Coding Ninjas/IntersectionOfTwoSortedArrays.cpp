#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> v1, v2;
    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        v1.push_back(ele);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v2.push_back(ele);
    }
    for (auto ele : v1)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (auto ele : v2)
    {
        cout << ele << " ";
    }
    cout << endl;
    findArrayIntersection(v1, m, v2, n);

    return 0;
}