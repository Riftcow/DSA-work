#include<iostream>
using namespace std;
// Muhammad Anees
// Roll NO: 27316
// BScs semester 03
// Dated: May 01, 2024

int main()
{
    int arr[8] = {9, 12, 5, 3, 7, 15, 23, 10};
    int n = 8;
    int k;
    // Value to delete
    cout << "Enter the value you want to delete: " << endl;
    cin >> k;

    // Find the index of the element to delete
    int i = 0;
    while (i < n && arr[i] != k)
    {
        i++;
    }
            //      Deleting the array   
    if (i < n)
    {
        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        n--;         cout << "Element " << k << " deleted successfully." << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    // Print the updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}