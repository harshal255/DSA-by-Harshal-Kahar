#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(8);
    s.insert(7);
    s.insert(5);
    s.insert(45);
    s.insert(45);

    for (auto ele : s)
    {
        cout << ele << " ";
    }
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    cout << endl;
    for (auto ele : s)
    {
        cout << ele << " ";
    }
    cout << endl;
    cout << "45 is present or not -> " << s.count(45) << endl;

   
    return 0;
}