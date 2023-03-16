#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        // int array
        int arr[5] = {0, 1, 88, 3, 4};
        cout << " Address of first memory block is " << arr << endl;
        // cout << " Address of first memory block is " << &arr << endl;
        // cout << " Address of first memory block is " << &arr[0] << endl;

        // print arrays element using pointer
        for (int i = 0; i < 5; i++)
        {
            cout << *(arr + i) << " ";
        }
        cout << endl;

        // first index then array to print element

        for (int i = 0; i < 5; i++)
        {
            cout << i[arr] << " == " << *(i + arr) << endl;
        }

        // sizeof difference between array as well pointer
        cout << sizeof(arr) << endl;
        int *ptr = &arr[0];
        cout << sizeof(ptr) << endl;
        cout << sizeof(*ptr) << endl;
        */

    // char array
    char ch[8] = "Harshal";
    cout << ch << endl;

    char *c = &ch[0];
    // Print entire string not address in case of charArray
    cout << c << endl;

    return 0;
}