#include <iostream>
using namespace std;

int main()
{
    string str = "tedet";
    string rev;

    for (int i = str.length() - 1; i >= 0; i--)
    {

        rev = rev + str[i];
    }

    cout << rev << endl;

    if (str == rev)
    {
        cout << "Given string is palindrome!";
    }
    else
    {
        cout << "Given string is not a palindrome!";
    }

    return 0;
}