// WAP to count number of even and odd numbers

#include <iostream>
using namespace std;

int main()
{

    int n;
    int even = 0, odd = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd;

    return 0;
}