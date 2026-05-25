#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {

        int n;
        cin >> n;
        long long int a[n + 1];
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }

        int min_num = INT_MAX;

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                int sum = 0;
                sum = a[i] + a[j] + j - i;
                if (sum < min_num)
                {

                    min_num = min(sum, min_num);
                }
            }
        }
        cout << min_num << endl;
    }

    return 0;
}