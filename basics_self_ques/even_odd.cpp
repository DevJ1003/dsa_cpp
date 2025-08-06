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
    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    if (x % 2 == 0)
    {
        cout << "x is even!";
    }
    else
    {
        cout << "x is odd!";
    }

    return 0;
}