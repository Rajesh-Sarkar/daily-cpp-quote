#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    student Rahim(43, 5, 3.15);
    student karim(1, 7, 3.99);

    cout << "Rahim" << endl;
    cout << "Roll: " << Rahim.roll << endl
         << "Class: " << Rahim.cls << endl
         << "GPA: " << Rahim.gpa << endl;
    cout << endl;
    cout << "Karim" << endl;
    cout << "Roll: " << karim.roll << endl
         << "Class: " << karim.cls << endl
         << "GPA: " << karim.gpa << endl;

    return 0;
}