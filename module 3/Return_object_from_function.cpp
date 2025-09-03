#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
student fun()
{
    student karim(1, 7, 3.99);
    return karim;
}
int main()
{
    student obj = fun();
    cout << "Karim" << endl;
    cout << "Roll: " << obj.roll << endl
         << "Class: " << obj.cls << endl
         << "GPA: " << obj.gpa << endl;

    return 0;
}