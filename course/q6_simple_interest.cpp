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
    float p, r, t;
    float si;

    cout << "Enter the principle amount: ";
    cin >> p;

    cout << "Enter the rate of interest (per annum): ";
    cin >> r;

    cout << "Enter the time period (in months): ";
    cin >> t;

    si = (p * r * t) / 100;
    cout << "The SI for given details: " << si << endl;

    return 0;
}