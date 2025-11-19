#include<iostream>
using namespace std;
    //      Array Insertion

    //  Display Function
void disp(int arr[], int size)
{
    for( int i=0;i< size ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


main ()
{
    int arr[15]={1,2,3,4,5,6,7,8,9,10};
    int item=0,
        index_insertion=5,
        capacity=10;

    //  Before Insertion
    disp(arr , capacity);

    //  Procss
    for(int i=capacity; i>=index_insertion ;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index_insertion]=item;
    capacity++;

    // OUTPUT DIsplay
    disp(arr, capacity);

}