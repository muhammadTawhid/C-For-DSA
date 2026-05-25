#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+' && (a + b) != c)
    {
        cout << a + b;
    }
    else if (s == '-' && a - b != c)
    {
        cout << a - b;
    }
    else if (s == '*' && a * b != c)
    {
        cout << a * b;
    }

    else
    {
        cout << "Yes";
    }

    return 0;
}