#include <iostream>
using namespace std;
int main()
{
    int myScore, yourScore;
    cout << "Enter my score: ";
    cin >> myScore;


    cout << "Enter your score: ";
    cin >> yourScore;

    cout << endl;

    if (myScore > yourScore)
        cout << "I won" << endl;

    if (myScore < yourScore)
        cout << "You won" << endl;

    if (myScore == yourScore)
    {
        cout << "A tie? can't be!" << endl;
        cout << "Give your real score: ";
        cin >> yourScore;

        if (myScore > yourScore)
            cout << "I know. I won" << endl;
        if (myScore < yourScore)
            cout << "You won" << endl;
        if (myScore == yourScore)
            cout << "It's really tie" << endl;
    }

    cout << "Thanks for telling us." << endl;
    return 0;
}