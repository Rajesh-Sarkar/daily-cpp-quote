#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int sum, divison, multiply;
    if (s == '+')
    {
        sum = a + b;
        if (c == sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << sum;
        }
    }

    if (s == '-')
    {
        divison = a - b;
        if (c == divison)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << divison;
        }
    }

    if (s == '*')
    {
        multiply = a * b;
        if (c == multiply)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << multiply;
        }
    }
    return 0;
}