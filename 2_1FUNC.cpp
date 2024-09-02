//
// Created by USER on 9/1/2024.
//

#include <iostream>    // directive to preprocessor
int Add (int first, int second)
{
    std::cout << "In Add(), received " << first << " and "
    << second << "\n";
    return first + second;
}

int main()
{
    using namespace std;

    cout << "I'm in main() \n";
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Calling Add()\n";
    c = Add(a, b);
    cout << "Back in main() \n";
    cout << "c was set to " << c;
    cout << "\nExiting...\n\n";
    return 0;
}