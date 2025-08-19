/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int minOfTwo(int a, int b){
    
    if (a < b){
        return b;
    } else {
        return a;
    }
}

int main()
{
    
    cout << "The greater number is: " << minOfTwo(55, 6) << endl;
    
    return 0;
}