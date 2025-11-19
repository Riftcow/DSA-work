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
    int ub=8;
     int arr[8]={2,4,6,8,10,12,14,16};
     
        //      item you want to find
        cout<<"Enter the item you want to search :"<<endl;
        cin>>item;

    //  looping 
    for(int i=lb ;i<=ub;i++)
    {
        mid=int(lb-ub)/2;
        //first if condition for searching value at mid...
        if(item==arr[mid])
        {
            cout<<"the item is at location : "<<mid<<endl;
            break;
        }
        else
        {
        //  2nd if else condition...
        	if(item>arr[mid])
        	{
            	lb=mid+1;
        	}
        	else
        	{
            	ub=mid-1;
        	}
        
		}
    }

    if(item==arr[mid])
    cout<<"Item found at "<<mid<<endl;
    else
    cout<<"Unsucessful"<<endl;

}
