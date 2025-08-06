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
    int sum = 0;

    cout << "Enter the num till which you want to add digits: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    cout << "The final sum: " << sum << endl;

    return 0;
}