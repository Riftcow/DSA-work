#include <iostream>

int main()
{
    int sorted_array[8]={1,3,5,7,9,11,13,17};
    
    int mid,
        lower_bound=0,
        upper_bound=8,
        item=11;

    for(;lower_bound<=upper_bound;)
    {
        mid= (lower_bound+upper_bound)/2;
        if(sorted_array[mid]==item)
        {
            std :: cout<<"Item found at location "<<" "<<mid<<std :: endl;
            break;
        }

        if(sorted_array[mid]<item)
        {
            lower_bound=mid+1;
        }
        else
        {
            upper_bound=mid-1;

        }
    
    }
  
}
