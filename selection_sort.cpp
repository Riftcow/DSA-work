#include<iostream>
using namespace std;
int main()
{
    // Array input
    int arr[] = {19, 2, 5, 1, 7, 4, 11, 14, 12, 10};
    int n = 10;

    // Selection sorting
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i]) // Corrected the comparison condition
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output sorted array
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
    alogrithm:  selection array->   (assending order)
        input:  unsorted array
        output: sorted array

        Steps:  
        01:     for(int i=0;i<n-1;i++)
                {
        02:     
                    for(int j=i+1;j<n)
                {
        03:     comparing;
                if(a[j]>a[j+1]),then
                int temp <--a[s]
                a[i]<--a[j]
                a[j]<--temp
            
                end++

                }     
        
                }     
*/