#include <iostream>
using namespace std;

//  Linear Search fucntion
int main()
{
    int array[9]={9,12,5,3,7,15,23,10};
    int item,location=0,i=0,n=8;
    cout<<"Enter the item you want to find "<<endl;
    cin>>item;
    cout<<endl;

    while( i<=n)
    {
        if (item ==array[i])
        {
            location =i;
        }
        i=i+1;
    }

    if(location==0)
    {
        cout<<"Item not found "<<endl;
    }
    else 
    {
        cout<<"Item found at location "<<location <<"which is "<<item<<endl;
    }

    return 0;
}
