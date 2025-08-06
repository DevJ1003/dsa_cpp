/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{

    int year;

    cout << "Enter the year to check for leap year: ";
    cin >> year;

    if (year % 100 == 0)
    {

        if (year % 400 == 0)
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            cout << year << " is a leap year!";
        }
        else
        {
            cout << year << " is not a leap year!";
        }
    }

    return 0;
}