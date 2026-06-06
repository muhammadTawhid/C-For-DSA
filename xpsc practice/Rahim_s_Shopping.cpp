#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int max_num = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {

            if (a[i] > max_num)
            {
                max_num = max(a[i], max_num);
            }
        }
        
    }

    if (max_num > 0)
    {
        cout << max_num;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}