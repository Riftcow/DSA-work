#include<iostream>
using namespace std;

int main()
{
    int cont,mid,item,
    lb=0;       //lower bound...
    cout<<"Enter the array size :   ";
    cin>>cont;

    //  upper bound  
    int ub=cont;

            //data entry at run time to array...
    int arr[cont];
    cout<<"\nEnter the array numbers"<<endl;
    for(int i=0;i<cont;i++)
    {
        cin>>arr[i];
    }
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
