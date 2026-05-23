#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (48 <= x && x <= 57)
    {
        cout << "IS DIGIT";
    }
    else if ('A' <= x && x <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else if ('a' <= x && x <= 'z')
    {
        cout << "ALPHA\nIS SMALL";
    }

    return 0;
}