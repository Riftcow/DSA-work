#include <iostream>
class Stack
{
    int *array;
    int top,n;
    public :
    Stack(): n(50), top(-1) 
    {
        array= new int [n];
    }

    //   stack functions logics
    void Push(int psh)
    {
        if(top ==n-1)
        {
            std :: cout<<"Stack overflow "<<std :: endl;
        }
        else 
        {
            top++;
            array[top]=psh;    
        }
    }

    void Pop()
    {
        if (top ==-1)
        {
            std :: cout<< "stack is already empty "<< std :: endl;
        }
        else {
            top --;   
        }
    }


    int Top(void)
    {
        return array[top];
    }

    bool Empty(void)
    {
        if (top==-1)
        {
            return true;
        }
        else 
            return false;
    }

};
int main()
{
    Stack t1;
    t1.Push(1);
    t1.Push(3);
    t1.Push(5);

    std :: cout << t1.Top()<< std :: endl;
    t1.Pop();
    t1.Pop();
    t1.Pop();
    std :: cout << t1.Empty();
    return 0;
}
