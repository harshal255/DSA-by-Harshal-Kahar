#include <bits/stdc++.h>
using namespace std;

int main()
{

    auto a = 5;
    int *pointer;         // this is a pointer(chatGPT --> this is a pointer to an int)
    int **pointerPointer; // pointer's pointer
    int ***ppppointer;
    pointer = &a; // that pointer store address of a(chatGPT --> that pointer stores the address of the variable `a`)
    pointerPointer = &pointer;
    ppppointer = &pointerPointer;
    cout << pointer << endl;  // print address of pointer(a)(chatGPT --> print the address of the variable pointed to by `pointer`)
    cout << *pointer << endl; // print value of pointer(a)(chatGPT --> print the value stored at the address pointed to by `pointer`, which is the value of `a`)

    *pointer = 86;
    cout << *pointer << endl; // override pointer value
    cout << pointerPointer << endl;
    cout << **pointerPointer << endl;
    cout << ppppointer << endl;
    cout << ***ppppointer << endl;

    // The new operator in C++ is used for dynamic memory allocation, which means allocating memory at runtime rather than compile time. The new operator returns a pointer to the newly created object and can be used to create objects of any data type, including built-in data types, user-defined data types, and objects of class type.
    int *p = new int(50); // value should be 50 (dynamically initialized)
    cout << *p << endl;

    // How to create dynamically array
    int *array = new int[3];
    array[0] = 10;
    *(array + 1) = 20;
    array[2] = 30;

    cout << "The value of array[0] is " << array[0] << endl;
    cout << "The value of array[1] is " << array[1] << endl;
    cout << "The value of array[2] is " << array[2] << endl;

    // When you use the new operator to allocate memory for an array, you must use the delete[] operator to deallocate the memory:
    // It's important to use the delete operator to free up dynamically allocated memory as soon as it's no longer needed, otherwise it may result in a memory leak.
    delete p;
    delete array;
    cout << p << endl
         << array;

    return 0;
}