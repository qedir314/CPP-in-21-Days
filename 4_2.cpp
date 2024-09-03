#include <iostream>
using namespace std;
int main()
{
    int myAge = 19;
    int yourAge = 19;
    cout << "I'm " << myAge << " years old" << endl;
    cout << "You're " << yourAge << " years old" << endl;

    myAge++;
    ++yourAge;
    cout << "One year passes" << endl;
    cout << "I'm " << myAge << " years old" << endl;
    cout << "You're " << yourAge << " years old" << endl;

    cout << "Another year passes" << endl;
    cout << "I'm " << myAge++ << " years old" << endl;
    cout << "You're " << ++yourAge << " years old" << endl;

    cout << "Let's print again." << endl;
    cout << "I'm " << myAge << " years old" << endl;
    cout << "You're " << yourAge << " years old" << endl;
}