#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number less than 10 and greater than 100: ";
    cin >> x;
    cout << endl;

    if (x >= 10)
        if (x > 100)
            cout << "More than 100, thanks!" << endl;
    else
        cout << "Less than 10, Thanks!" << endl;

    return 0;
}