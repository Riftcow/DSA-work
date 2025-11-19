#include<iostream>
int main()
{
    //  insertion sort 
    int unosrted_array[10]={21,19,17,13,11,9,7,5,3,1};
    int n=10;
    //  dispaly before
    for(int i=0; i<n;i++)
    {
        std :: cout<<" "<<unosrted_array[i];
    }
    std ::cout<<"\n\n"<<std ::endl;
        
    //program logics
    for (int i=1;i<n;i++)
    {
        int temp,p;
        temp=unosrted_array[i];
        p=i-1;

        while(p>=0)
        {
            if(unosrted_array[p]>temp)
            {
                unosrted_array[p+1]=unosrted_array[p];
                p--;
            }
        }

            unosrted_array[p+1]=temp;
    }

    //  result dispaly
 for(int i=0; i<n;i++)
    {
        std :: cout<<" "<<unosrted_array[i];
    }

}
