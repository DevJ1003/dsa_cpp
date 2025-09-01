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
    int i;
    int j;

    cout << "Enter the number: ";
    cin >> i;

    for (j = 1; j <= i; j++)
    {

        if (j % 3 == 0 && j % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (j % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (j % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << j << endl;
        }
    }

    return 0;
}