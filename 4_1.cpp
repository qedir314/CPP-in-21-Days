#include <iostream>
using namespace std;
int main()
{
    unsigned int difference;
    unsigned int bigNum = 100;
    unsigned int smallNum = 50;

    difference = bigNum - smallNum;
    cout << "Difference is " << difference << endl;

    difference = smallNum - bigNum;
    cout << "Now difference is " << difference << endl;

    return 0;
}