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
    //      1
    //     121
    //    12321
    //   1234321

    int x = 4;

    for (int i = 0; i < x; i++)
    {

        // spaces
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << " ";
        }

        // num1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // num2
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}