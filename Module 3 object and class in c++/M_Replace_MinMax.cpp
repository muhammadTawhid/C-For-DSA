#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min_i, max_i;
    int min_num = INT_MAX, max_num = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        min_num = min(a[i], min_num);
        max_num = max(a[i], max_num);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_num)
        {
            a[i] = max_num;
        }
        else if (a[i] == max_num)
        {
            a[i] = min_num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}