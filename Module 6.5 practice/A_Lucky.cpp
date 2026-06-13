#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int first_half = 0;
        int second_half = 0;
        for (int i = 0; i < s.size() / 2; i++)
        {
            first_half = (s[i] + first_half) - '0';
        }

        for (int i = s.size() / 2; i < s.size(); i++)
        {
            second_half = (s[i] + second_half) - '0';
        }

        if (first_half == second_half)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}