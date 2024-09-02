#include <iostream>
using namespace std;

void WritingConsole()
{
    // Exercise 1 of Day 2
    cout << "I love C++" << endl;
}

int Add(int num1, int num2)
{
    cout << "Received first number: " << num1 << endl <<
         "second number: " << num2 << endl;
    return num1 + num2;
}

int Substraction(int num1, int num2)
{
    // Exercise 5
    cout << "Received first number: " << num1 << endl <<
    "second number: " << num2 << endl;
    return num1 - num2;
}

int main()
{
    WritingConsole();

    // std:: cout << Is there a bug here?";
    // In exercise 3, should be like that
    std::cout << "Is there a bug here?" << endl;

    int a,b;
    a = Substraction(5,4);
    cout << "a was set to: " << a << endl;
    cout << endl;
    b = Add(5,4);
    cout << "b was set to: " << b << endl;

    return 0;
}