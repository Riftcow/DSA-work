#include<iostream>
using namespace std;
main()
{
    //  practicing the array for reversing it...
    //  input data...
    int start=0,end,temp,siz;
    cout<<"Enter the size of array "<<endl;
    cin>>siz;
    int arr[siz],brr[siz];
    brr[siz]=arr[siz];
    
    cout<<"Enter value to array "<<endl;
    for(int i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
        end=siz-1;
    for(start;start<end-1;start++)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
    }   
            // testin for palindrome
    if(brr[siz]==arr[siz])
    {
        cout<<"The array is Palindrome Number "<<endl;
    }
    else
        cout<<"Not a Palindrome "<<endl;
            //       outputing the array...
        cout<<"Output : "<<endl;
    for(int i=0;i<siz;i++)
    {
        cout<<arr[i]<<" ";
    }
}