#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *ptr = new int;
    *ptr = 100;

    cout << *ptr << endl << x;
    return 0;
}