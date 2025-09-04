#include <bits/stdc++.h>
using namespace std;
struct student
{
public:
    char name[50];
    int roll;
    char section;
    float math_marks;
    int cls;
};
int main()
{
    student a;
    strcpy(a.name, "Rajesh");
    a.roll = 10;
    a.section = 'A';
    a.math_marks = 77.5;
    a.cls = 5;

    student b;
    strcpy(b.name, "Raj");
    b.roll = 100;
    b.section = 'A';
    b.math_marks = 85.5;
    b.cls = 5;

    student c;
    strcpy(c.name, "Sarkar");
    c.roll = 1000;
    c.section = 'A';
    c.math_marks = 95.5;
    c.cls = 5;

    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << "Highest mark is" << a.math_marks << endl;
        cout << a.name << endl;
    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << "Highest mark is" << b.math_marks << endl;
        cout << "and his name is" << b.name << endl;
    }
    else
    {
        cout << "Highest mark is" << " " << c.math_marks << endl;
        cout << "and his name is" << " " << c.name << endl;
    }
    return 0;
}