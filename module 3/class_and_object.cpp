#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a;
    a.cgpa = 3.4;
    a.roll = 12;
    strcpy(a.name, "Rajesh");

    cout << "Name: " << a.name << " " << endl
         << "Roll: " << a.roll << endl
         << "CGPA: " << a.cgpa << endl;
    return 0;
}