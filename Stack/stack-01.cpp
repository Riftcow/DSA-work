#include<iostream>
using namespace std;
            /*  Muhammad Anees
                Student ID 27316
                BScs Semester 3rd

                Stack Operation required
                Push()        **top() Checking**
                Pop()         **Empty() Checking**    return bool type
            */
class Stack
{
    int *ptr_array;
    int n,s=-1;
    
    public:
//  Constructor for array defining...
    Stack(int x){
        //Allocating memory to array
        n=x;
        ptr_array= new int [n];
    }
//  Function Design for Pusing the value into stack
    bool Push(){
        if(s==n-1)
        {
            cout<<"Stack is Full  "<<endl;
            return false;
        }
        s++;
        
//  Enter The Value to Push it
        int x;
        cout<<"Enter the Value to Push it \t";
        cin>>x;
        ptr_array[s]=x;
        return true;
        
    }
//  Function Design for poping the value from stack
    void Pop(){
        if (s==-1)
        {
            cout<<"Stack is Empty  "<<endl;
            return;
        }
        s--; 
    }
//  Checking for Top value
    int Top(){
        if (s==-1)
        {
            cout<<"Stack is Empty  "<<endl;
            return -1;
        }
        return ptr_array[s];
    }
//  Checking for Empty stack
    bool Empty(){
        if (s==-1)
        return true;
        else
        return false;
        
    }

//  Checking for Stack is full
bool Full(){
    if (s==n-1)
    {
        return true;
    }
    else{
        return false;
    }
}

//      Display Full Dynamic Stack 
void Disp(){
    cout<<"Display all Info of Stack : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<ptr_array[i];
    
    }
    cout<<endl;
}

};

int main(){
     cout<<"Enter the Size of Stack "<<endl;
    int n;
    cin>>n;
    Stack coin_stack(n);

    if(coin_stack.Empty())
    {
        cout<<"Stack Empty Check  : True "<<endl;
    }

            //  Running Push Function until Stack gets Full...
             bool tick= true;
         if (tick!=coin_stack.Full())
        {
            while (coin_stack.Push()==true)
            {
                coin_stack.Push();
            }
        }
    //  Finding Top Number and Value
    cout<<"Top Value  : "<<coin_stack.Top()<<endl;
    coin_stack.Disp();

    
    return 0;
}
