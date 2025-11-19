#include<iostream>
class Multi
{
    int row,col,mt_1[1][1],mt_2[1][1];  
    public:
    Multi(int x, int y ) : row(x), col(y)
    {
        std :: cout<<"Enter the row and column size for matrix "<< std :: endl;
    }

    //  Data Entry 
    void matrix_data_entry()
    {
        
    }
         

};

int main()
{
    int x,y;
    std :: cin>>x;
    std :: cout<<"\n";
    std :: cin>>y;

    Multi test(x,y);
}
