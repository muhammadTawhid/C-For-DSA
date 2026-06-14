#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int compare(Student left, Student right){

    // if (left.marks == right.marks)
    // {
    //     return left.roll < right.roll;
    // }
    // else
    // {
    //     return left.marks < right.marks;
    // }
    
    return (left.marks == right.marks) ? left.roll < right.roll : left.marks < right.marks;
}

int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << a[i].roll << a[i].marks << endl;
    }
    
    
    return 0;
}