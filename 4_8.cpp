#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter two numbers." << endl;
    cout << "First: ";
    cin >> x;
    cout << "Second: ";
    cin >> y;
    cout << endl;

    if (x > y)
        z = x;
    else
        z = y;

    cout << "After if test, z: " << z << endl;

    z = (x > y) ? x : y;

    cout << "After conditional test, z: " << z << endl;
    int my = 23;
    int a = ++my;
    cout << a;
    return 0;
}