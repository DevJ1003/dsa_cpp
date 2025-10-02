// WAP to calculate maximum element of an array

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

    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    cout << "The maximum element: " << maxVal;

    return 0;
}