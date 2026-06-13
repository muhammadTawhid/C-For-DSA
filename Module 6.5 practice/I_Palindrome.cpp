#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool is_palindrome = true;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            is_palindrome = false;
        }
        i++;
        j--;
    }

    if (is_palindrome == true)
    {
        cout << "YES";
    }
    
    else
    {
        cout << "NO";
    }

    return 0;
}