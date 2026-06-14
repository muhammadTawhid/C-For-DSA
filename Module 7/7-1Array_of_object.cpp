#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int score;
};

int main(){
    int n;
    cin >> n;
    Student a[3];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].score;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].score << " " <<endl;
    }
    
    
    
    return 0;
}