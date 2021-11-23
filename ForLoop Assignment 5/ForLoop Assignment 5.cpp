// ForLoop Assignment 5.
// C++ program to compute sum of numbers between 20 and 25.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 20; i <= 25; i++)
    {
        // Adding numbers between 20 and 25
        sum = sum + i;
    }
    cout << "\n The sum of numbers from 20 to 25 is: " << sum << endl;
    return 0;
}