#include <bits/stdc++.h>
using namespace std;

// O(n^2);
//  vector<string> printPatt(int n)
//  {
//      vector<string> pattern;
//      int j = 0;
//      while (j < n)
//      {
//          int i = 0;
//          string row = "";
//          while (i < n - j)
//          {
//              cout << "*";
//              row.insert(0, "*");
//              i++;
//          }
//          pattern.push_back(row);
//          cout << endl;
//          j++;
//      }
//      return pattern;
//  }

// time complexity = O(n);

vector<string> printPatt(int n)
{
    vector<string> pattern(n);
    for (int i = 0; i < n; i++)
    {
        pattern[i] = string(n - i, '*');
    }
    return pattern;
}

int main()
{
    int n;
    cin >> n;
    printPatt(n);

    return 0;
}