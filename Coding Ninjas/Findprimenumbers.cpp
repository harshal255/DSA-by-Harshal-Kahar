#include <bits/stdc++.h>
using namespace std;

int isPrime(int N)
{
    if (N <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

vector<int> primeNumbersTillN(int N)
{
    vector<int> ans;
    int i = 0;
    while (i <= N)
    {
        
        if (isPrime(i))
        {
            ans.push_back(i);
        }
        i++;
    }
   
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> primes = primeNumbersTillN(n);
    for (auto ele : primes)
    {
        cout << ele << " ";
    }

    return 0;
}