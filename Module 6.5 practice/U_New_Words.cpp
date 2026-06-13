#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int e, g, y, p, t = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {
            e++;
        }
        else if (s[i] == 'g' || s[i] == 'G')
        {
            g++;
        }
        else if (s[i] == 'y' || s[i] == 'Y')
        {
            y++;
        }
        else if (s[i] == 'p' || s[i] == 'P')
        {
            p++;
        }
        else if (s[i] == 't' || s[i] == 'T')
        {
            t++;
        }
    }
    int min_value = min({e, g, y, p, t});

    cout << min_value;

    return 0;
}