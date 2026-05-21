#include <iostream>
using namespace std;
int main(){
    int x;
    char a;
    double n;
    // std:: cin >> x;
    // std:: cout << x;
    // std:: cout << std:: endl << "input";

    cin >> x >> a >> n;
    cout << x << " " << a;
    cout << endl << "inputs" << endl;
    cout << n;

    // printing ascii value;
    int value = 'A';
    char c = 'a';
    int d = 65;
    cout << endl << value <<endl;
    cout << (int)c;
    cout << endl << (char)d;
    return 0 ;
}