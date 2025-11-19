#include <iostream>
using namespace std;
                                        //                         Muhammad Anees
                                       //                      Student ID 27316
                                         //                     BScs Semester 3rd
                                        //             Queue Operation required

class DQueue {
    int front, back, size, n;
    int *ptr_dqueue_array;

public:
//  Constructor 
    DQueue(int x) {
        n=x;
        ptr_dqueue_array= new int [n];
        front = -1;
         back= 0;
        size = 0;
    }

    // checking if the Function is full in Dqueue...
    bool Full() {
        return ((front == 0 && back == n - 1) || (front == back + 1));
    }

    // checking of the function is Empty in Dqueue...
    bool Empty() {
        return (front == -1);
    }

    // Function for inserting an item from deque...
    void Insertion_Front(int item) {
        if (Full()) {
            cout << "Deque is Full "<<endl;
            return;
        }
        //  checking for starting front is empty or not
        if (front == -1) {
            front = back = 0;   
        } 

        else if (front == 0) {
            front = n - 1;
        }

        else {
            front--;
        }

        ptr_dqueue_array[front] = item;
        size++;
        cout << "Insertion at front : " << item<<endl;
    }

    // Function to delete an item from back deque...
    void deletion_back() {
        if (Empty()) {
            cout << "Deque is Empty "<<endl;
            return;
        }
        
        cout << "Deleted Item from Back : " << ptr_dqueue_array[back] <<endl;

        if (front == back) {
            //  if run it means it has only 1 item...
            front = back = -1;
        } 
        else if (back == 0) {
            back= n- 1;
        } 
        else {
            back--;
        }

        size--;
    }

    // Function for Front item in Dqueue...
    int Get_front() {
        if (Empty()) {
         cout << "Deque is Empty "<<endl;
            return -1;
        }
        // returns the front value...
        return ptr_dqueue_array[front];
    }

    // Function for back item in Dqueue...
    int Get_Back() {
        if (Empty()) {
          cout << "Deque is Empty"<<endl;
            return -1;
        }
        //  Returns the back Value...
        return ptr_dqueue_array[back];
    }

    //  OUTPUT Display the DQueue...
    void Disp(){
        cout<<"The OUTPUT of Full DQueue Array : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<ptr_dqueue_array[i];
        }
        cout<<endl;
        
    }
};

int main() {
    int size,item;
    cout<<"Enter the size of the De-Queue "<<endl;
    cin>>size;
    cout<<endl;

    DQueue test1(size);
        //  items inserted...
        cout<<"Enter The item in the De-Queue until it gets Full "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>item;
        test1.Insertion_Front(item);
    }
    cout<<endl;

    //  Now Deletion from back ...
    int del;
    cout<<"Enter how much item you want to delete : "<<endl;
    cin>>del;
   for (int i = 0; i < del; i++)
   {
    test1.deletion_back();
   }
   cout<<endl;
   
    

    return 0;
}