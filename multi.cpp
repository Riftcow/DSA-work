#include<iostream>
using namespace std;

int main()
{
            //inputting the values...

    int r,c,
        ml=0;
    cout<<"Enter numbers of rows and coumn\n\t";   
    cin>>r;
    cout<<"\n\t";
    cin>>c;

                // first matrix input values...
        int arr[r][c];
        cout<<"Enter the element of array : "<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }

                // Second matrix input values...
        int brr[r][c];
        cout<<"Enter the element of array : "<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>brr[i][j];
            }
        }

        //resultant array...
        int crr[r][c];

         for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            crr[i][j]=0;
            crr[i][j]+=(arr[i][ml] * brr[ml][j]);
        }
    }


        //output matrix display...

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<crr[i][j]<<" ";

            }
        cout<<"\n";
        }
        return 0;
}