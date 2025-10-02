#include <iostream>
using namespace std;

int main()
{

    string str;
    int count = 0;

    cout << "Enter a string or sentence: ";
    getline(cin, str);

    // count words
    for (int i = 0; i < str.length(); i++)
    {

        //  if(str[i] != ' '){                  // for character count
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            count++;
        }
    }

    cout << "Total words: " << count;

    return 0;
}