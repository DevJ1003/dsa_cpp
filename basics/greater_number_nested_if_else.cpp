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
    int x, y, z;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Enter the value of z: ";
    cin >> z;

    if (x > y)
    {
        if (x > z)
        {
            cout << "x is greater!";
        }
        else
        {
            cout << "z is greater!";
        }
    }
    else
    {
        if (y > z)
        {
            cout << "y is greater!";
        }
        else
        {
            cout << "z is greater!";
        }
    }

    return 0;
}