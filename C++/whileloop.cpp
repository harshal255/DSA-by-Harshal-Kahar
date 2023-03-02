#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
       
    }
    cout << "The sum of even numbere untill : " << n << " " << sum << endl;

    return 0;
}