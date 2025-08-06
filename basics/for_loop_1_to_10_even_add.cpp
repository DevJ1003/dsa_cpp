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
    int sum = 0;

    for (i = 2; i <= 10; i = i + 2)
    {
        sum = sum + i;
    }

    cout << "The sum of even digits from 1 to 10 : " << sum << endl;

    return 0;
}
