// WAP to rotate array by 1 or k position

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of elements of first array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // store last element
    int last = arr[n - 1];

    // shifting all elements to the right
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // putting last element at first
    arr[0] = last;

    cout << "Array after shifting elements towards right by 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}