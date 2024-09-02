#include <iostream>
using namespace std;

typedef unsigned short USHORT;    // typedef defined

int main()
{
    USHORT Width = 9, Length;
    Length = 12;

    // creating Area variable
    unsigned short Area = Width * Length;

    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl << endl;

    USHORT smallNumber;
    smallNumber = 65535;
    cout << "Small number: " << smallNumber << endl;
    smallNumber++;
    cout << "Small number: " << smallNumber << endl;
    smallNumber++;
    cout << "Small Number: " << smallNumber << endl << endl;

    short smallNumber2;
    smallNumber2 = 32767;
    cout << "Small number: " << smallNumber2 << endl;
    smallNumber2++;
    cout << "Small number: " << smallNumber2 << endl;
    smallNumber2++;
    cout << "Small Number: " << smallNumber2 << endl << endl;

    return 0;
}