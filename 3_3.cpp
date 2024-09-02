#include <iostream>
using namespace std;
int main()
{
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday,
    Friday, Saturday};
    Days today;
    today = Monday;

    if (today == Sunday || today == Saturday)
        cout << "\nGoing to love the weekends! \n";
    else
        cout << "\nBack to work";
}