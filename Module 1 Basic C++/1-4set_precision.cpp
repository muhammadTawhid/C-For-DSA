#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double x = 2.34242;

    cout <<fixed << setprecision(2) << x; // 2.34
    return 0;
}