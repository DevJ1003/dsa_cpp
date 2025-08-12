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
    // WAP to print following pattern
    // *****
    // *****
    // *****
    // *****
    // *****

    int x = 5;
    int i, j;

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}