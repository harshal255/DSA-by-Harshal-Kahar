#include <bits/stdc++.h>
using namespace std;

// boyer-Moore Majority Vote algorithm

int majorityElement(int a[], int size)
{
    int count = 0;
    int element;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            element = a[i];
        }

        if (element == a[i])
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }

    if (count > 1)
    {

        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{

    int n;
    cin >> n;
    int array[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> array[i];
    }
    cout << "The elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << majorityElement(array, n) << endl;
    majorityElement(array, n);

    return 0;
}