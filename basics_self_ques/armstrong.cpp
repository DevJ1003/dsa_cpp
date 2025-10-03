#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num, original, digit;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    original = num;

    // cube each digit and add
    while (num > 0)
    {

        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
    {

        cout << original << " is an Armstrong number!";
    }
    else
    {

        cout << original << " is not an Armstring number!";
    }

    return 0;
}