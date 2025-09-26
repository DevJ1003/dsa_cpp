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

    string str = "banana";
    int freq[256] = {0};

    // count freq
    for (int i = 0; i < str.length(); i++)
    {

        freq[(int)str[i]]++;
    }

    // print freq
    for (int i = 0; i < 256; i++)
    {

        if (freq[i] > 0)
        {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}