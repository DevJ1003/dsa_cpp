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

    // WAP to calculate total sum from 1 to N digits divisible by 3.
    int num, i;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    for (i = 3; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    cout << "The total sum from 1 to " << num << " which is divisible by 3 is: " << sum << endl;

    return 0;
}