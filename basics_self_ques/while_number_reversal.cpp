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

    int num, rem;
    int rev = 0;

    cout << "Enter the number to check digits: ";
    cin >> num;

    while (num != 0)
    {

        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    cout << "The revered number: " << rev << endl;

    return 0;
}