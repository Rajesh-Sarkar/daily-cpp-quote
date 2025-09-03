#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double gpa;
};
int main()
{
    student Rahim;
    Rahim.roll=45;
    Rahim.cls=5;
    Rahim.gpa=3.15;

    student karim;
    karim.roll=44;
    karim.cls=6;
    karim.gpa=3.85;

    cout << "Rahim" << endl;
    cout<<"Roll: " << Rahim.roll <<endl<< "Class: " << Rahim.cls << endl << "GPA: " << Rahim.gpa << endl;
    cout << endl;
    cout << "Karim" << endl;
    cout<<"Roll: " << karim.roll <<endl<< "Class: " << karim.cls << endl << "GPA: " << karim.gpa << endl;

    return 0;


}