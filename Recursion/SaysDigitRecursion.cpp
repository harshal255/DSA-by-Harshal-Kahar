#include <bits/stdc++.h>
using namespace std;

void saysDigit(int n)
{
    // Base condition
    if (n == 0)
    {
        return;
    }

    // Processing part
    int digit = n % 10;
    n /= 10;

    // recursive call
    saysDigit(n);
    // cout << arr[digit] << " ";s
    // switch case to map digit to word
    switch (digit)
    {
    case 0:
        cout << "zero"
             << " ";
        break;
    case 1:
        cout << "one"
             << " ";
        break;
    case 2:
        cout << "two"
             << " ";
        break;
    case 3:
        cout << "three"
             << " ";
        break;
    case 4:
        cout << "four"
             << " ";
        break;
    case 5:
        cout << "five"
             << " ";
        break;
    case 6:
        cout << "six"
             << " ";
        break;
    case 7:
        cout << "seven"
             << " ";
        break;
    case 8:
        cout << "eight"
             << " ";
        break;
    case 9:
        cout << "nine"
             << " ";
    }
}

int main()
{
    // string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    saysDigit(n);

    return 0;
}