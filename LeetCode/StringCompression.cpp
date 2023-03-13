#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    vector<char> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    
    cout << endl;
    cout << compress(v);

    return 0;
}