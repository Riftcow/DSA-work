#include<iostream>
using namespace std;

main()
{
            //input data
    int in,item,inside, 
        loc=0;
    cout<<"Enter the array size  :";
    cin>>in;
    int arr[in];

            //cin data entry at run time
    cout<<"Enter the value of Arrays "<<endl;
    for(int i=0;i<in;i++)
    {
        cin>>arr[i];
    }

        //code number you want to find
        cout<<"Enter the Item code number you want ot Find "<<endl;
        cin>>item;

        //searching the array as linear way...

        for(int i=0;i<in;i++)
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

        //  Linear search
        //input:    Array
        //output:   required location
        //  Steps:
        //          i=1, loc=0
        //step 01;  While(i<=n), repeat
        //step02;   if(item==a[i]), then
        //          loc=i
        //endif
        //  i=i+1;
        //  if(loc==0),then print (not found!)
        //     else
        //      print(item found at location : loc)
        //exit.