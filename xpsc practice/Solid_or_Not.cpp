#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        bool prime = true;
        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}