#include <iostream>
int main()
{
    //  bubble sort 
    int unsorted_array[10]={1,3,5,7,9,11,13,17,19, 21};       
    int n=10;

    for(int i=0; i<n ;i++)
    {
        std :: cout<<" "<<unsorted_array[i];
    }
    std ::cout<<" \n\n"<<std :: endl;


    for(int i=0; i<=n ;i++)
    {
        for(int j=0 ; j<=n-i ;j++)
        {
            if (unsorted_array[j]<unsorted_array[j+1])
            {       
                    //  sorting logics...
            int temp;
                temp=unsorted_array[j];
                unsorted_array[j]=unsorted_array[j+1];
                unsorted_array[j+1]=temp;
            }
        }
    }


//  display 
    for(int i=0; i<n ;i++)
    {
        std :: cout<<" "<<unsorted_array[i];
    }
}
