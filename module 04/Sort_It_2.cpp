#include <bits/stdc++.h>
using namespace std;
void sort_it(int a[], int size);
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort_it(a,n);
    return 0;
}
void sort_it(int a[], int size)
{
    sort(a, a + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}