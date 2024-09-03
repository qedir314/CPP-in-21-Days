#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cout << "Enter two numbers." << endl << "First: ";
    cin >> firstNum;
    cout << "Second: ";
    cin >> secondNum;
    cout << endl;

    if (firstNum >= secondNum)
    {
        if ( firstNum % secondNum == 0 )
        {
            if (firstNum == secondNum)
                cout << "They are the same." << endl;
            else
                cout << "They are divisible" << endl;
        }
        else
            cout << "They are not divisible" << endl;
    }
    else
        cout << "Hey! The second number is larger" << endl;
}