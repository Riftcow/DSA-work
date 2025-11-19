#include<iostream>
using namespace std;

    //  Muhammad Anees
    //      Roll NO: 27316
    //  BScs semester 03
    //  Dated: may 01,2024

main()
{
    int mid,item,
        
     lb=0;       //lower bound...

    //  upper bound  
    int ub=7;
     int arr[8]={9,12,5,3,7,15,23,10};
     
        //      item you want to find
        cout<<"Enter the item you want to search :"<<endl;
        cin>>item;

    //  looping 
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        //first if condition for searching value at mid...
        if(item==arr[mid])
        {
            cout<<"the item is at location : "<<mid+1<<endl;
            break;
        }
        //  2nd if else condition...
        if(item<arr[mid])
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
}