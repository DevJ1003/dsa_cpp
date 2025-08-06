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
    float English;
    float Maths;
    float Science;
    float Hindi;
    float Music;

    cout << "Enter the value for English: ";
    cin >> English;

    cout << "Enter the value for Maths: ";
    cin >> Maths;

    cout << "Enter the value for Science: ";
    cin >> Science;

    cout << "Enter the value for Hindi: ";
    cin >> Hindi;

    cout << "Enter the value for Music: ";
    cin >> Music;

    float sum = English + Maths + Science + Hindi + Music;
    cout << "The sum of all subjects : " << sum << endl;

    float percentage = sum / 500 * 100;
    cout << "The percentage of all subjects : " << percentage << "%" << endl;

    return 0;
}