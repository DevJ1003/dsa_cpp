/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// WAP to calculate sum of numbers from 1 to N.

int sumN(int a)
{

    int sum = 0;

    for (int i = 1; i <= a; i++)
    {

        sum = sum + i;
    }

    return sum;
}

int main()
{

    cout << sumN(3) << endl;
    cout << sumN(10) << endl;

    return 0;
}