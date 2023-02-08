#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// time complexity = o(n!);

int main()
{
    string str = "ABC";

    // Sort the string in lexicographically
    // ascennding order
    sort(str.begin(), str.end());

    // Print the permutations
    cout << "All the permutations of the string are: \n";
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));

    return 0; // return statement added to main function.
}