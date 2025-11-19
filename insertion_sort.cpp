#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
                    //  inputting the value to unsorted array
     int arr[n];
    cout<<"Enter the element of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

        //      insertion 
        for(int p=1;p<=n;p++)
        {
            int temp,i;

            temp=arr[p];
            i=p-1;

                while(i>=1 )
                {       //      swapping
                    if(temp<arr[i])
                    {
					
                        arr[i+1]=arr[i];
                        arr[i]=temp;
                   	}
					   else
					    i--;
                    
                
                }
        }

        // array output...
        cout<<"Output of a sorted array is "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<" "<<arr[i]<<" ";
        }
}
