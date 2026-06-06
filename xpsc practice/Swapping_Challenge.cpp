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

    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    sort(b, b+n);
    int median_val = b[n/2];



    int median_i = 0;
    for (int i = 0; i < n; i++)
    {   
        if (median_val == a[i])
        {
            median_i = i;
        }
    }
    
    int ans = abs(median_i - (n/2));
    cout << ans; 

    return 0;
}