#include <bits/stdc++.h> // include standard C++ library
using namespace std;     // using the standard namespace

template <typename T> // for custom datatype
class myVector        // define class 'myVector'
{
public:
    T *arr; // integer pointer 'arr' to store the array
    // int *arr;       // integer pointer 'arr' to store the array
    int size;       // integer 'size' to store the size of the array
    myVector(int m) // constructor taking integer 'm' as argument
    {
        size = m;          // store the size as 'm'
        arr = new T[size]; // allocate memory for the array 'arr' of size 'size'
    }
    T dotProduct(myVector &v) // function to calculate dot product between two Vectors
    {
        T d = 0;                       // initialize integer 'd' to store the dot product
        for (int i = 0; i < size; i++) // loop over the size of the arrays
        {
            d += this->arr[i] * v.arr[i]; // add the product of the current elements of both arrays to 'd'
        }
        return d; // return the dot product 'd'
    }
};

int main() // main function
{
    myVector<double> v1(3);       // create an object 'v1' of class 'myVector' with size 3(constructor)
    v1.arr[0] = 4.555;            // assign 4 to the first element of 'v1'
    v1.arr[1] = 3.2;              // assign 3 to the second element of 'v1'
    v1.arr[2] = 1.9;              // assign 1 to the third element of 'v1'
    myVector<double> v2(3);       // create an object 'v2' of class 'myVector' with size 3
    v2.arr[0] = 1.8;              // assign 1 to the first element of 'v2'
    v2.arr[1] = 0.5;              // assign 0 to the second element of 'v2'
    v2.arr[2] = 1.4;              // assign 1 to the third element of 'v2'
    double a = v1.dotProduct(v2); // call the 'dotProduct' function on objects 'v1' and 'v2' and
    cout << a << endl;
}
