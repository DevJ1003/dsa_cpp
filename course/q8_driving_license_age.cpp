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
    int age;

    cout << "Enter the age: ";
    cin >> age;

    if (age <= 0)
    {
        cout << "Enter valid age!";
    }
    else if (age >= 18)
    {
        cout << "You can apply for driving license!";
    }
    else
    {
        cout << "You can't apply for driving license!";
    }

    return 0;
}