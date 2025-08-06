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

    int num1, num2;
    int i, hcf, lcm;

    cout << "Enter the num1: ";
    cin >> num1;

    cout << "Enter the num2: ";
    cin >> num2;

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF of " << num1 << "&" << num2 << ": " << hcf << endl;

    lcm = (num1 * num2) / hcf;
    cout << "LCM of " << num1 << "&" << num2 << ": " << lcm << endl;

    return 0;
}