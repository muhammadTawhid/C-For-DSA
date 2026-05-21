#include <iostream>
using namespace std;

int main(){

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }

    int n;
    cin >> n;
    cin.ignore();
    
    char s[100];
    // cin >> s;
    cin.getline(s, 100); 
    cout << n << endl << s;

    string t;
    cin >> t;
    cout << endl << t;

    return 0;
}