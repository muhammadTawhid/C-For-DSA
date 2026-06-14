#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    
    // int min_value = INT_MAX;
    Student min_obj;
    min_obj.marks =  INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // min_value = min(a[i].marks, min_value);
        if (a[i].marks < min_obj.marks)
        {
            min_obj = a[i];
        }
        
    }
    cout << min_obj.name << min_obj.roll << min_obj.marks;
    
    return 0;
}