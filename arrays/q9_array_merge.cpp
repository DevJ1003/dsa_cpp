// WAP to merge two different arrays

#include <iostream>
using namespace std;

int main()
{

    int n1, n2;

    cout << "Enter number of elements of first array: ";
    cin >> n1;

    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter number of elements of second array: ";
    cin >> n2;

    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    // merging
    int merged[n1 + n2];
    int k = 0;

    // copy first array
    for (int i = 0; i < n1; i++)
    {
        merged[k++] = arr1[i];
    }

    // copy second array
    for (int i = 0; i < n2; i++)
    {
        merged[k++] = arr2[i];
    }

    // printing merged array
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}