#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math;
    int eng;

    Student(string name, int roll, int math, int eng){
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }

    // void hello(){
    //     cout << "hello " << name << endl;
    // }
    void totalMarks(){
        cout << "total marks of " << name << " " << math+eng <<endl;
    }
};

int main(){
    Student akib("akib", 23, 45, 84);
    akib.totalMarks();

    Student rakib("rakib", 23, 44, 89);
    rakib.totalMarks();

    return 0;
}