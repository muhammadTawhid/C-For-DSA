#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;

    }
};

int main(){

    Student rahim("rahim", 2, 'c', 32, 4);
    Student karim("karim", 3, 'c', 34, 4);
    Student chorim("chorim", 9, 'c', 56, 4);
    int highest_score = max({rahim.math_marks, karim.math_marks, chorim.math_marks});

    if (highest_score == rahim.math_marks)
    {
        cout << rahim.name;
    }
    else if (highest_score == karim.math_marks)
    {
        cout << karim.name;
    }
    else if (highest_score == chorim.math_marks)
    {
        cout << chorim.name;
    }


    // cout << highest_score;
    
    return 0;
}