#include<iostream>
using namespace std;
 
 main()
 {
    //  input of unsorted array
    int c;
    cout<<"Enter the size of array : ";
    cin>>c;
    int arr[c];
    cout<<"Enter the unsorted elements of array "<<endl;
    for(int i=0; i<=c-1;i++)
    {
        cin>>arr[i];
    }

        //     Steps for bubble sorting
    for(int i=1;i<= c-1;i++)
    {
        for(int j=1;j<=c-i;j++)
        {
            int temp;
            
            if(arr[j]<arr[j+1])
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
        }
    }

        //  printing the sorted array
            cout<<" \n\n\t\t";
        for(int i=0; i<c;i++)
        {
            cout<<" "<<arr[i]<<" ";
        }

 }