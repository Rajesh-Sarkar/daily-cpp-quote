#include <iostream>
#include <algorithm> // for min and max number and swap
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Minimum Number is " << min(a, b) << endl;
    cout << "Maximum Number is " << max(a, b) << endl;
    swap(a,b);
    cout<< a << " " << b;
    return 0;
}