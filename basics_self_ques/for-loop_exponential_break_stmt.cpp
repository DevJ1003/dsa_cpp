/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, k;

    cout << "Enter the value for exponential power : ";
    cin >> j;

    for (i = 0; i <= 100; i++)
    {
        if (i == 6)
        {
            cout << "Entered the loop to break the code, executed till i = 5";
            break;
        }

        k = pow(i, j);
        cout << i << "^" << j << "=" << k << endl;
    }

    return 0;
}