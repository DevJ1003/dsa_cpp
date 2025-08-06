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
    float radius, area, circumference;

    cout << "Enter the value radius: ";
    cin >> radius;

    area = (22 * radius * radius) / 7;
    cout << "The area of circle : " << area << endl;

    circumference = (2 * 22 * radius) / 7;
    cout << "The circumference : " << circumference << endl;

    return 0;
}