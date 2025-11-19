#include <iostream>
int main()
{   
    int value,position, n=9;
    int array[10]={1,3,5,7,9,11,13,17,19,21};

    std :: cout<<"Enter the value you want to enter "<< std :: endl;
    std :: cin>>value;
    std :: cout<< std ::endl;
    std :: cout<<"Select location from 10 numbers to insert the value "<< std :: endl;
    std :: cin>> position;
    std :: cout<< std :: endl;
        
    //      Alogrithm workspace
    position--;
    int i=n;
    while(i>=position)
        {
            array[i+1]=array[i];
            i--;
        }
        array[position]=value;
        n++;

        //traverse output
        for(int i=0; i<=n;i++)
        {
            std :: cout<<array[i]<<" ";
        }
}
