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
    int x;
    int y;

    cout << "Enter the value for x: ";
    cin >> x;

    cout << "Enter the value for y: ";
    cin >> y;

    cout << "The value entered for x : " << x << endl;
    cout << "The value entered for y : " << y << endl;

    int sum = x + y;
    cout << "The sum of x & y : " << sum << endl;

    int diff = x - y;
    cout << "The diff of x & y : " << diff << endl;

    return 0;
}