#include<iostream>
using namespace std;
 //  Muhammad Anees
    //      Roll NO: 27316
    //  BScs semester 03
    //  Dated: may 01,2024

int main()
{   
        // Value declaration
      int arr[8]={9,12,5,3,7,15,23,10};
      int i=8,
            n=8,
            k;
            //  location to insert
            cout<<"Enter the location to insert: "<<endl;
            cin>>k;

            while(i>=k)
            {
                arr[i+1]=arr[i];
                i--;

            }

            cout<<"Enter the value to Insert : "<<endl;
            cin>>arr[k];
            n++;
        
}
