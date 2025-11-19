#include<iostream>
using namespace std;
                                        //                         Muhammad Anees
                                           //                      Student ID 27316
                                            //                     BScs Semester 3rd
                                            //             Queue Operation required
                                        //                Enqueue()  ,    Dequeue(),    Peek(), Empty()
                
class Queue
{
    int *ptr_array;
    int n,front,back;
    public:
    // Constructor Initilize
    Queue(int x){
        n=x;
        ptr_array= new int[n];
        front=-1,back=-1;
    }

    //  Enqueue Function just like Push() Function...
    void Enqueue(int item){
        if(back==n-1)
        {
            cout<<"Queue is Full "<<endl;
            return;
        }
        back++;
        ptr_array[back]=item;
            //  Specific case if front is equal to -1 then we increment it 1 time...
        if(front=-1)
        front++;
    }

    //  Dequeue Function similar to Pop() Function...
    void Dequeue(){
        if (front>back || front==-1)
        {
            cout<<"Queue is Already Empty "<<endl;
            return;
        }
        front++;
    }

    //  Finding Peek Value in Queue...
    int Top(){
         if (front>back || front==-1)
        {
            cout<<"Queue is Already Empty "<<endl;
            return -1;
        }
        return ptr_array[front];
    }
    //      Checking what if Queue is empty or not...
    bool Empty(){
         if (front>back || front==-1)
        {
            cout<<"Queue is Already Empty "<<endl;
            return true;
        }
        return false;
    }

    //  OUTPUT Display Function...
    void Disp()
    {
        cout<<"Output of Queue is : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<ptr_array[i];
        }
        cout<<endl;
    }


};

main(){
    //  Declaring size to array at run-time
    cout<<"Enter The Size of Queue "<<endl;
    int size,item;
    cin>>size;
    cout<<endl;

    Queue Test1(size);
        //  Pusing Value in Queue...
    cout<<"Enter The item in the Queue until it gets Full "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>item;   
            Test1.Enqueue(item);
        }
        //  OUTPUT
        Test1.Disp();
        
        // Checking Top Peek...
        cout<<"Top Value in Queue : "<<Test1.Top()<<endl;

        // Poping Value from Queue 2 Time ...
        Test1.Dequeue();
            Test1.Dequeue();
        //OUTPUT
        
        cout<<endl<<"Top After Dequeue : "<<Test1.Top()<<endl;




    return 0;
}