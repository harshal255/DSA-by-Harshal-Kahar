#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harshal"] = 98;
    marksMap["Jennifer"] = 59;
    marksMap["Estella"] = 2;
    marksMap.insert({{"Cora", 158}, {"Hermina", 58}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is : " << marksMap.size() << endl;
    cout << "The max size is : " << marksMap.max_size() << endl;
    cout << "The empty value is : " << marksMap.empty() << endl;

    return 0;
}