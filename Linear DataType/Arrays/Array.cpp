#include <bits/stdc++.h>
using namespace std;


int main()
{

    char array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element of " << i + 1 << " ";
        cin >> array[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << sizeof(array) / sizeof(char);

    return 0;
}