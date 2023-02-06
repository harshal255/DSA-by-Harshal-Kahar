#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    int n = 15;

    // for loops are best used when the number of iterations is known ahead of time and the loop variable needs to be incremented or decremented in a specific way.
    while (i < 15)
    {

        // while loops are best used when the number of iterations is not known ahead of time and the loop needs to continue executing until a certain condition is met.
        cout << i << " ";
        i++;
    }
    cout << endl;
    i = 0;

    // You can use a do-while loop when you want to execute the loop body at least once, even if the loop condition is false.
    do
    {

        cout << i << " ";
        i++;

    } while (i < 15);

    return 0;
}