// WAP to find second largest element in an array

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0], secondLargest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element: " << secondLargest;

    return 0;
}