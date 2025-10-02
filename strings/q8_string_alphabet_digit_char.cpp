#include <iostream>
using namespace std;

int main()
{

    string str;
    int alphabets = 0, digits = 0, specials = 0;

    cout << "Enter a string or sentence: ";
    getline(cin, str);

    // count alphabets, digits, special chars
    for (int i = 0; i < str.length(); i++)
    {

        if ((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (str[i] != ' ')
        {
            specials++;
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specials << endl;

    return 0;
}