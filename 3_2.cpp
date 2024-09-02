#include <iostream>
using namespace std;

// #define studentsPerClass 15   // defining constant

int main()
{
    for (int i = 32;i < 128;i++)
        cout << (char ) i;
    cout << endl;
    for (unsigned char i = 32;i<128;i++)
        cout << i;
    cout << endl;

    const unsigned short studentPerClass = 15;


    return 0;
}