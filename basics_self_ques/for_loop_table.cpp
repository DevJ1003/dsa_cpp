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
    int mul;

    cout << "Enter the number to print table: ";
    cin >> num;

    for (i = 1; i <= 10; i++)
    {

        mul = num * i;
        cout << num << "*" << i << "=" << mul << endl;
    }

    return 0;
}