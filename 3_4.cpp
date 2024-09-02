#include <iostream>
using namespace std;
int main()
{
    const int Sunday = 0;
    const int Monday = 1;
    const int Tuesday = 2;
    const int Wednesday = 3;
    const int Thursday = 4;
    const int Friday = 5;
    const int Saturday = 6;

    int today;
    today = Monday;

    if (today == Sunday || today == Saturday)
        cout << "\nGoing to love the weekends!\n";
    else
        cout << "\nBack to work.\n";
    return 0;
}