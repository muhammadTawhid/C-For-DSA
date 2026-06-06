#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            flag = true;
        }
    }
    
    if (flag == true)
    {
        cout << "-1";
    }
    else
    {
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            int present = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i)
                {
                    present = 1;
                    break;
                }
                
            }
            if (present == 0)
            {
                count++; 
            }
        }
        
        cout << count;
    }
    
    
    
    
    return 0;
}