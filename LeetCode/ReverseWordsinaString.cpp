#include <bits/stdc++.h>
using namespace std;

// function for reversing word

void reverse_word(string &str, int i, int j)
{
    while (i <= j)
    {
        swap(str[i], str[j]);

        i++;

        j--;
    }
}

string reverseWords(string str)
{

    int n = str.size();

    // j keeps track of index of last character

    int j = 0;

    int i = 0;

    while (i < n)
    {
        // ignore the spaces

        while (i < n && str[i] == ' ')
        {
            i++;
        }

        // put the characters at jth index and increment j

        while (i < n && isalnum(str[i]))
        {
            str[j++] = str[i];

            i++;
        }

        // provide single space between word

        str[j++] = ' ';
    }

    // find new useful string

    str = str.substr(0, j);

    // traverse over str

    // and reverse the each word of the str

    i = 0;

    while (i < str.size())
    {
        // keep track of start

        int start = i;

        while (i < str.size() && isalnum(str[i]))
        {
            i++;
        }

        // reverse the word

        reverse_word(str, start, i - 1);

        i++;
    }

    // reverse the whole str

    reverse(str.begin(), str.end());

    // ignore the leading spaces

    i = 0;

    while (i < str.size() && str[i] == ' ')
    {
        i++;
    }

    return str.substr(i);
}

int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s);

    return 0;
}