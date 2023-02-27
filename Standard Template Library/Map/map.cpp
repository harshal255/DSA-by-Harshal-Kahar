#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m;
    m[1] = "Harshal";
    m[2] = "Sureshchandra";
    m[3] = "Kahar";
    m.insert({5, "Hello"});

    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }

    cout << "finding 2 ->" << m.count(2) << endl;
    m.erase(3);
    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
    // find return iterator
    auto it = m.find(1);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}