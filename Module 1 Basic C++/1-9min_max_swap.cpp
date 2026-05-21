#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    // if (a < b){
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }

    cout << min(a,b) << "\n";
    cout << "min in lots of value " << min({ 4, 6, 7, 2, 5 ,2}) << "\n";
    cout << "Max " << max(a, b) << "\n";


    int x = 2, y = 3;
    swap(x, y);
    cout << "x=" << x << " " << "Y=" << y;
    

    return 0;
}