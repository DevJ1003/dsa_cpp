/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int sumD(int num)
{

    int i, last;
    int sum = 0;

    while (num > 0)
    {

        last = num % 10;
        num = num / 10;
        sum = sum + last;
    }

    return sum;
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "The sum of digits of " << num << " is: " << sumD(num) << endl;

    return 0;
}