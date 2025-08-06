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
    int num1, num2, x;

    cout << "Enter the value of num1: ";
    cin >> num1;

    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "Values before swapping : " << num1 << "&" << num2 << endl;

    x = num1;
    num1 = num2;
    num2 = x;

    cout << "Values after  swapping : " << num1 << "&" << num2 << endl;

    return 0;
}