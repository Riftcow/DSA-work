#include <iostream>
int main()
{
    int value,position,n=9;
    int array[10]={1,3,5,7,9,11,13,17,19,21};
    std :: cout<<"select position to delete the Value "<< std:: endl;
    std :: cin>>position;

    for(int i=position; i<n ;i++)
    {
       array[i]=array[i+1];
    }
      n--;  
            //  display result
        for(int i=0 ;i<n ;i++)
        {
            std :: cout<<" "<<array[i];        
        }
        return 0;
}
