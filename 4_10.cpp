// Exercise 2
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << endl << "b: ";
    cin >> b;
    cout << endl << "c: ";
    cin >> c;

    if (c = (a-b))
        cout << "a: " << a << " minus b: " << b <<
        " equals c: " << c;
    else
        cout << "a-b doesn't equal c: ";
    return 0;
}