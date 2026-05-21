#include <iostream>
using namespace std;

int main (){
    int x = 4;
    if (x%2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    
    //using ternary operator
    (x%2 == 0) ? cout <<endl << "even" : cout << "odd";
    
    return 0;
}