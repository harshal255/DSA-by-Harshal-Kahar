#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<string> s;
    s.push("Kahar ");
    s.push("Harshal");
    s.push("Sureshchandra");

    cout << "Top Elements--> " << s.top() << endl;
    s.pop();
    cout << s.top();
    cout << endl;
    cout << s.size();
    return 0;
}