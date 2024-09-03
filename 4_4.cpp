#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cout << "Please enter a big number: ";
    cin >> firstNum;
    cout << "Please enter a smaller number: ";
    cin >> secondNum;

    if (firstNum > secondNum)
        cout << "Thanks" << endl;
    else
        cout << "The first number isn't bigger!" << endl;

    return 0;
}