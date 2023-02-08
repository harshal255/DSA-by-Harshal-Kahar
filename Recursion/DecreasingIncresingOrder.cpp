#include <bits/stdc++.h>
using namespace std;

void Decresing(int n)
{
    if (n == 1)
    {
        cout << "1";
        return;
    }
    cout << n << " ";        // first n print
    return Decresing(n - 1); // then function call means small value return
}

void Increament(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }
    Increament(n - 1); // first n-1 small value print (call)
    cout << n << " ";  // then incremental value print
}

int main()
{
    int n;
    cin >> n;
    Decresing(n);
    cout << endl;
    Increament(n);

    return 0;
}