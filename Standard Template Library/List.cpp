#include <bits/stdc++.h>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator iter;
    for (iter = l.begin(); iter != l.end(); iter++) // initially size of l is 0 so don't write l.size() unless code misbehaviour
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // lists of zero length

    list1.push_back(5);
    list1.push_back(55);
    list1.push_back(555);
    list1.push_back(5555);
    list1.push_back(55555);

    // list<int>::iterator iter;
    display(list1);

    list<int> list2(3); // empty list with size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 4;

    display(list2);
    cout << list2.size();

    // list1.merge(list2);
    // display(list1);

    list<int> list3;
    list3.merge(list1);
    display(list1);
    list3.merge(list2);
    display(list3);
    list3.sort();
    list3.reverse();
    display(list3);

    list3.swap(list1);
    display(list3);
    display(list1);

    return 0;
}