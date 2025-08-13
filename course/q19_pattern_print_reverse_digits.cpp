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

    // WAP to print following pattern:
    // Pattern-1:           // Pattern-2:
    // 1111                 // 1 1 1 1
    //  222                 //  2 2 2
    //   33                 //   3 3
    //    4                 //    4

    int x = 4;

    // outer loop start
    for (int i = 1; i <= x; i++)
    {

        // spaces loop start
        for (int s = 1; s < i; s++)
        {
            cout << " ";
        }

        // numbers loop start
        for (int j = i; j <= x; j++)
        {
            cout << i; // for pattern-1
            // cout << i << " ";   // for pattern-2
        }

        cout << endl;
    }

    return 0;
}