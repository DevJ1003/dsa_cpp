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

    // WAP to print pattern ABCD in 4 lines (square pattern (NxN)) using char.
    // ABCD
    // ABCD
    // ABCD
    // ABCD

    int x = 4;

    for (int i = 1; i <= x; i++)
    {

        char ch = 'A';
        for (int j = 1; j <= x; j++)
        {
            cout << ch;
            ch = ch + 1;
        }

        cout << endl;
    }

    return 0;
}