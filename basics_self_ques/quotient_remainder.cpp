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
    int divident, divisor;
    int a, b;

    cout << "Enter the value of divident: ";
    cin >> divident;

    cout << "Enter the value of divisor: ";
    cin >> divisor;

    a = divident / divisor;
    cout << "Quotient : " << a << endl;

    b = divident % divisor;
    cout << "Remainder : " << b << endl;

    return 0;
}