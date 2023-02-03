#include <bits/stdc++.h>
using namespace std;

template <typename T>

void display(vector<T> &v) // parameter is a reference of vector
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec; // automatically size manage (increase automatically)
    vector<float> vec2;
    int size;
    cout << "Enter size : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        float ele;
        cout << "Enter an element to add to this vector : ";
        cin >> ele;
        vec.push_back(ele);
        vec2.push_back(ele);
    }
    display(vec);
    display(vec2);
    vec2.insert(vec2.begin() + 2, 888); // 2nd index

    display(vec2);

    return 0;
}