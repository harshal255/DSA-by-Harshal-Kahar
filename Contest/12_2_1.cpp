#include <bits/stdc++.h>
using namespace std;

long long findTheArrayConcVal(vector<int> &nums)
{
    string a, b;
    string temp;
    int num;
    long long res = 0;

    for (int i = 0, j = nums.size() - 1; i <= j; i++, j--)
    {

        if (i != j)
        {
            a = to_string(nums[i]);
            b = to_string(nums[j]);
            temp = a + b;
        }
        else if (i = j)
        {
            temp = to_string(nums[i]);
        }
        num = stoi(temp);

        res += num;
    }
    return res;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    // for (auto element : v)
    // {
    //     cout << element << " ";
    // }
    cout << endl;
    cout << findTheArrayConcVal(v);

    return 0;
}