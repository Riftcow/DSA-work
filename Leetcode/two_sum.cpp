#include<iostream>
using namespace std;


            /*
            Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
            
            Constraints:

        2 <= nums.length <= 104
        -109 <= nums[i] <= 109
        -109 <= target <= 109
        Only one valid answer exists.
            */
class Sum
{
    public:
    int target;
Sum()
{
    int count;
    cout<<"Enter The target value  : "<<endl;
    cin>>target;
    cout<<"\n Enter size of the array  : "<<endl;
    cin>>count;
    int nums[count];
    cout<<"Enter numbers to array  : "<<endl;
    for(int i=0; i<count ;i++)
    {
        cin>>nums[i];
        cout<<" ";
    }
}
    void two_sum(void)
    {

    }

};

int main()
{

}