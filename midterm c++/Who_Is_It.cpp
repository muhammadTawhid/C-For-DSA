#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{

    int t;
    cin >> t;
    Student a, b, c;
    Student highest;
    while (t)
    {
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;
        int hightest_num = max({a.marks, b.marks, c.marks});

        if (hightest_num == a.marks)
        {
            highest = a;
        }
        else if (hightest_num == b.marks)
        {
            highest = b;
        }
        else if (hightest_num == c.marks)
        {
            highest = c;
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.marks << " " << endl;
        t--;
    }

    return 0;
}