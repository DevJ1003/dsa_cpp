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

    int x, y;

    cout << "Enter the value: ";
    cin >> x;

    cout << "The value for x: " << x << endl;

    // y = x++;
    y = ++x;
    cout << "The value for y: " << y << endl;

    return 0;
}