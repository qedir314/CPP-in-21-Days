// Exercises 1
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << endl;
    cout << "Enter y: ";
    cin >> y;

    if (x >= y)
        x = y;
    else
        y = x;
    cout << "X: " << x << endl << "y:" << y;
}