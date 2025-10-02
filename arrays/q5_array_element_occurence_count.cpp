// WAP to count occurence of an element of an array

#include <iostream>
using namespace std;

int main()
{

    int n, num, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to count: ";
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    cout << "The number " << num << " appears " << count << " times!";

    return 0;
}