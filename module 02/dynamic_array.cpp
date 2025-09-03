#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    return p;
}
int main()
{
    int *x = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] <<" ";
    }
    return 0;
}