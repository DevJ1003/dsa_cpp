/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// WAP to calculate binomial coefficient nCr using functions.

int Fact(int n)
{

    int i;
    int fact = 1;

    for (i = 1; i <= n; i++)
    {

        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{

    int fact_n = Fact(n);
    int fact_r = Fact(r);
    int fact_nMr = Fact(n - r);

    return fact_n / (fact_r * fact_nMr);
}

int main()
{
    int n = 8, r = 2;
    int BC = nCr(n, r);

    cout << "The binomial coefficient: " << BC << endl;

    return 0;
}