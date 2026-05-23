#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;

};

int main(){
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    // a.roll = 56;
    // a.gpa = 4.5;
    // char temp[100] = "Jhon";
    // strcpy(a.name, temp);

    cout << a.name << endl << a.roll << endl << a.gpa <<endl;
    cout << b.name << endl << b.roll << endl << b.gpa;
    return 0;
}