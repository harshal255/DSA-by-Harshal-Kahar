#include <bits/stdc++.h>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for (auto ele : d)
    {
        cout << ele << " ";
    }
    d.pop_back();
    cout << endl;
    for (auto ele : d)
    {
        cout << ele << " ";
    }

    d.push_front(5);
    d.push_back(10);
    cout << endl;
    for (auto ele : d)
    {
        cout << ele << " ";
    }
    cout << endl;

    cout << d.at(3);
    cout << endl;
    cout << "-> front ele " << d.front() << " -> Back ele " << d.back();
    cout << endl;
    cout << d.empty();

    cout << "Before Erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 2);
    cout << "After Erase " << d.size() << endl;
    
    for (auto ele : d)
    {
        cout << ele << " ";
    }

    return 0;
}