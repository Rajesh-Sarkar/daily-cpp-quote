#include <bits/stdc++.h>
using namespace std;
struct student
{
public:
    int id;
    char name[100];
    char section;
    float total_marks;
};
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.total_marks;
        cin >> b.id >> b.name >> b.section >> b.total_marks;
        cin >> c.id >> c.name >> c.section >> c.total_marks;
        student winner = a;
        if ((b.total_marks > winner.total_marks) || (b.total_marks == winner.total_marks && b.id < winner.id))
        {
            winner = b;
        }
        if ((c.total_marks > winner.total_marks) || (c.total_marks == winner.total_marks && c.id < winner.id))
        {
            winner = b;
        }
        cout << winner.id << " " << winner.name << " " << winner.section << " " << winner.total_marks << endl;
    }
    return 0;
}