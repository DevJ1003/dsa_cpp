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
    int count = 0;

    cout << "Enter the number to check for prime: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Given number is not a prime number!";
    }
    else if (num == 2 || num == 3)
    {
        cout << "Given number is a prime number!";
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            cout << "Given number is a prime number!";
        }
        else
        {
            cout << "Given number is not a prime number!";
        }
    }

    return 0;
}