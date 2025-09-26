#include <iostream>
using namespace std;

int main()
{
    char str[100] = "programming";
    char result[100];
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        int j;
        for (j = 0; j < k; j++)
        {
            if (str[i] == result[j])
            {
                break;
            }
        }
        if (j == k)
        { // not found in result
            result[k++] = str[i];
        }
    }

    result[k] = '\0';
    cout << "After removing all duplicates: " << result;

    return 0;
}