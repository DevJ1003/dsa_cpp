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

    string str = "teddy";
    string rev;

    for (int i = str.length() - 1; i >= 0; i--)
    {

        rev = rev + str[i];
    }

    cout << "The reveresed string:" << rev;

    return 0;
}