/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int Fact(int a)
{

    int i;
    int fact = 1;

    for (i = 1; i <= a; i++)
    {

        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num1 = 5;
    int num2 = 6;

    cout << "The factorial of " << num1 << " is: " << Fact(num1) << endl;
    cout << "The factorial of " << num2 << " is: " << Fact(num2) << endl;

    return 0;
}