#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    // cin >> str; // only gets value until first space.
    // getline(cin, str);
    // cout << endl;
    // cout << str << endl;

    string str1(5, 'h');
    cout << str1 << endl;

    string str2 = "A harshal, s. kahar ";
    cout << str2 << endl;

    // string str3 = str1.append(str2);
    // cout << str3 << endl;
    // cout << str1 << endl; // change str 1 as well

    cout << str1 + str2 << endl;

    string Clear = "Harshal sksks ";
    cout << Clear;
    Clear.clear();
    cout << Clear << endl; // Whole string cleared

    // Compare String
    cout << "Enter two string ";

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << s2.compare(s1) << endl;
    cout << s1.length() << endl;
    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    // cout << s1.erase(2, 3) << endl;

    // start from index 2 & how long going to delete (+3)

    // how to find substring
    cout << s1.find("Har") << endl; // give index no if found
    s1.find("str") ? cout << "found" << endl : cout << "Not Found" << endl;

    s1.insert(s1.size(), "I Love You"); // first parameter should not outof size ,where your inserted string start from
    cout << s1 << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ",";
    }
    cout << endl;

    // substring
    string subString = s2.substr(2, 6);
    cout << subString << endl;

    // numeric String
    cout << "Enter Numeric String : ";
    string numericString;
    getline(cin, numericString);
    cout << numericString << endl;
    int x = stoi(numericString);
    cout << x << endl;
    int y = 6758;
    cout << to_string(y) + "22" << endl; // convert y to string

    sort(numericString.begin(), numericString.end());
    cout << numericString << endl;

    sort(s2.begin(), s2.end());
    cout << s2 << endl
         << endl;

    return 0;
}