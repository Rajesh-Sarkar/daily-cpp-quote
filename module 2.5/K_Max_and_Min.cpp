#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int maximum=max(x,max(y,z));
    int minimum=min(x, min(y,z));
    cout << minimum << " " << maximum << endl;
    return 0;
}