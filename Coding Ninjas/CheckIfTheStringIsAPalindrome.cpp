#include <bits/stdc++.h>
using namespace std;

// string removeSpecialCharacter(string &s)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9'))
//         {
//             s.erase(i, 1);
//             i--;
//         }
//     }
//     return s;
// }

// bool checkPalindrome(string s)
// {
//     removeSpecialCharacter(s);

//     // transform(s.begin(), s.end(), s.begin(), ::tolower);
//     s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
//     cout << s << endl;
//     string m = s;
//     cout << m << endl;

//     int n = s.size();

//     for (int i = 0; i < n; i++)
//     {
//         // The isalnum() method returns True if all the characters are alphanumeric, meaning alphabet letter (a-z) and numbers (0-9).
//         if (!isalnum(s[i]))
//         {
//             i++;
//         }
//         //  swap(s[i], s[n - i - 1]);
//         if (tolower(s[i]) != tolower(s[n - i - 1]))
//             return false;
//     }
//     // cout << s << endl;
//     // return m == s;

//     return true;
// }



bool checkPalindrome(string s)

{

  // Write your code here.

  int st = 0;

  int end = s.size() - 1;

  bool flag = true;

  while (st <= end)

  {

    if (!isalnum(s[st])) {

      st++;

    }

    else if (!isalnum(s[end])) {

      end--;

    }

    else {

      if (tolower(s[st]) != tolower(s[end])) {

        return false;
      }

      st++;

      end--;
    }
  }

  return true;
}

int main()
{
    string s;
    getline(cin, s);

    cout << checkPalindrome(s);
    // cout << removeSpecialCharacter(s);

    return 0;
}