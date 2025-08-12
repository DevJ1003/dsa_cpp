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
    // 1
    // 21
    // 321
    // 4321

    int x = 4;

    for (int i = 1; i <= x; i++)
    {

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}