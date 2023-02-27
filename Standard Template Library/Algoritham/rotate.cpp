#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(15);
    v.push_back(551);
    v.push_back(19);
    v.push_back(115);

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}