#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s[2]; //l
    cout << s.front() <<endl; // h
    cout << s[0] <<endl; // h
    cout << s.back(); // o
    cout << s[s.size()-1];
    return 0;
}