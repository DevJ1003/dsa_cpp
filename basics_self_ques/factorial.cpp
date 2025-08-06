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
    int num, i;
    int fact = 1;

    cout << "Enter the number: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {

        fact = fact * i;
        // cout << "Factorial : " << fact << endl;
    }

    cout << "Factorial : " << fact << endl;

    return 0;
}