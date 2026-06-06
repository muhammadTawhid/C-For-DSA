#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello world";
    
    cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity();
    // s.clear();
    cout << s.empty() << endl;
    // s.resize(4) // hell
    s.resize(15, 'g'); //hello worldgggg
    cout << s;
    return 0;
}