#include <bits/stdc++.h>
using namespace std;

long long int *sort_it(int n)
{
    long long int *a = new long long int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    sort(a, a + n, greater<int>());
    return a;
}

int main()
{
    int n;
    cin >> n;
    long long int *a = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}