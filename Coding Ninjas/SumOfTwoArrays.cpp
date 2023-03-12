#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // second case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> v1, v2;

    int m, n;

    cin >> m >> n;

    cout << endl;
    for (int i = 0; i < m; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v2.push_back(element);
    }
    cout << endl;
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
    vector<int> primes = findArraySum(v1, m, v2, n);
    for (auto ele : primes)
    {
        cout << ele << " ";
    }

    return 0;
}