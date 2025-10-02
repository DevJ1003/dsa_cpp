#include <iostream>
using namespace std;

int main()
{

    string str = "teddy";
    string rev;

    for (int i = str.length() - 1; i >= 0; i--)
    {

        rev = rev + str[i];
    }

    cout << "The reveresed string:" << rev;

    return 0;
}