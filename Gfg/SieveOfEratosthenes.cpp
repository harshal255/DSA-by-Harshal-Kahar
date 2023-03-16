#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int N)
{
    // cout << "function";
    vector<bool> prime(N + 1, false); // size N+1 & initial value is false
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = true;
            }
        }
    }
    vector<int> AllPrime; // create new vector;
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == false)
        {
            AllPrime.push_back(i);
        }
    }

    return AllPrime;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     v.push_back(ele);
    // }
    // cout << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    vector<int> v1 = sieveOfEratosthenes(n);
    for (auto ele : v1)
    {
        cout << ele << " ";
    }

    return 0;
}