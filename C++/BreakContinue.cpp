#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pocketMoney = 3000;
    // for (int date = 1; date <= 30; date++)
    // {
    //     if (date % 2)

    //         continue;
    //     if (pocketMoney == 0)
    //         break;

    //     cout << "Go Out today.." << endl;

    //     pocketMoney = pocketMoney - 300;
    //     cout << pocketMoney << " ";
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     // continue statements skip to the next iternation of the loop
    //     if (i % 3 == 0)
    //         // break statement terminate the loop
    //         continue;
    //     cout << i << " ";
    // }

    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {

        // If you include curly braces {} after the if statement, it will create a block of code that contains one or more statements that will be executed if the condition is true.
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }

        // If you don't include curly braces {} after the if statement, only the next statement following the if statement will be executed if the condition is true
    }
    // cout << i << endl;
    if (n == i)
    {
        cout << "Prime" << endl;
    }

    return 0;
}