#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter the string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }

    cout << "The case changed string: " << str;

    return 0;
}