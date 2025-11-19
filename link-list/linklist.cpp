#include<iostream>
using namespace std;
class Linklist
{
    public:
    int values:
    Linklist* next;

    //  Constructor for Data entry
    Linklist(int x)
    {
        values=x;
        next=NULL;

    }
    
};
//  insertion multiple linklist at end point by a sequence 
    void insert(Linklist* &head, int x)
    {
        //  creating new 
        Linklist* n= new Linklist(x);
        //  for traversing in linklisting nodes...
        Linklist* temp= head;
        while (temp->next!=NULL)
        {
            temp=temp->next;

        }
        
    }

main()
{
    
}