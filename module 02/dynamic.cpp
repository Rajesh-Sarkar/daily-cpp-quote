#include <iostream>
using namespace std;

int *p;
void fun()
{
    int x = 10;
    int *str = new int;
    *str = 100;
    cout << "Fun -> " << *str << endl;
}
int main()
{

    int x = 20;
    fun();
    cout << "Main -> " << x << endl;
    return 0;
}