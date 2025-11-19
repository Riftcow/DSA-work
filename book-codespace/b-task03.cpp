#include <iostream>
#include <vector>
template<typename T>

void Fill(std :: vector<T>& a,int start,int end,T val)
{
	for(;start < end-1;start++)
	{
		a[start]=val;
	}

}
int nain()
{
	std :: vector<int> box ={1,2,3,4,5,6};
		int value=19;
Fill(box,0,4,value);
	return 0;
}
