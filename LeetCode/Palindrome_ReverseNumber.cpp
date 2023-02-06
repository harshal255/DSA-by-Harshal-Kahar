#include <bits/stdc++.h>
using namespace std;
int ReverseNum(int n)
{
    long long reverse = 0;

    while (n != 0)
    {
        int reminder = n % 10;
        reverse = reverse * 10 + reminder;
        n = n / 10;
    }

    return reverse;
}
bool isPalindrome(int n)
{

    // cout << "I am a function" << endl;
    int rn = ReverseNum(n);
    if (n == rn && n >= 0)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n);
    // cout << ReverseNum(n);

    return 0;
}