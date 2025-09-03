#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5); // sort(starting point,ending point)
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}