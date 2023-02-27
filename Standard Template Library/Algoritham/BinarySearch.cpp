#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    // element present or not
    cout << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound ->" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound -->" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    return 0;
}