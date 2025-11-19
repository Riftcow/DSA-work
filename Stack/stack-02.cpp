#include<iostream>
using namespace std;
class Stack
{
    int *ptr_array;
    int top,n;

    public:
    Stack(){
        ptr_array= new int [n];
        cout<<"Enter The size of a Stack "<<endl;
        cin>>n;
        cout<<endl;
    }

    void Push(int x){
        if (top==n-1)
        {
            cout<<"Stack is Full "<<endl;
            return;
        }
        ptr_array[top]=x;
        top++;
    }

    void Pop(){
        if (top==-1)
        {
            cout<<"Stack is Empty "<<endl;
            return;
        }
        top--;
        
    }
    int Top(){
        if (top==-1){
            cout<<"Stack is Empty  "<<endl;
        }
        return ptr_array[top];
    }
    bool Empty(){
        if (top==-1)
        {
            cout<<"Stack is Empty  "<<endl;
            return true;
        }
    }
        
    void Disp()
    {
        cout<<"Stack Info is : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<ptr_array[i];
        }
        cout<<endl;
    }

};

main()
{
    Stack test1;
    
    test1.Empty();
    test1.Push(7);
    test1.Push(9);
    test1.Push(11);

    test1.Disp();
    return 0;
}