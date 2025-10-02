// WAP to calculate average of all elements of an array

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

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
        sum = sum + arr[i];
    }

    cout << "The average of an array: " << (float)sum / n;

    return 0;
}