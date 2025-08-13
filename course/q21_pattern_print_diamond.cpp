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
    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    int x = 4;

    // Top part
    for (int i = 0; i < x; i++)
    {

        // spaces
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {
            // spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    // Bottom part
    for (int i = 0; i < x - 1; i++)
    {

        // spcaes
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != x - 2)
        {

            // spcaes
            for (int j = 0; j < 2 * (x - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}