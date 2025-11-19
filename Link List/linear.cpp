#include<iostream>
using namespace std;

                        //      Muhammad Anees
                        //      Roll NO: 27316
                        //      BScs semester 03

main()
{
            //input data
    int item,inside, 
        loc=0;
     int arr[8]={9,12,5,3,7,15,23,10};

        //code number you want to find
        cout<<"Enter the Item code number you want ot Find "<<endl;
        cin>>item;

        //searching the array as linear way...

        for(int i=0;i<8;i++)
        {

            if (item==arr[i])
            {
                loc=i+1;
                inside=arr[i];
            }

        }

        if(loc==0)
        cout<<" Item is not found in the location"<<endl;
        else
            cout<<"Item is found at location "<<loc<<" Inside that array is "<<inside<<endl;

        return 0;
}