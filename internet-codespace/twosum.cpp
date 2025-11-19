#include <iostream>
#include <vector>

std :: vector<int> Twosum( std :: vector<int> &Box, int target , int size )
{
	std :: vector<int> result;
		for(int i=0; i<= size ;i++)
		{
			for(int j=1; j<= size ;j++)
			{
				if(Box[i]+Box[j]==target)
				{
					result[0]=i,
					result[1]=j;
					return result;
				}
			}
		}
	return  {};
}
int main()
{
	int s,
		val;
	std :: cout << "Enter the Size of your Container"<< std :: endl;
	std::vector<int> nums,
					result;
		
		std :: cin>> s;
		std :: cout<<"\nEnter values to Container\n";
		
		for(int i=0 ;i<s ;i++)
		{
			std :: cin>> val;
			nums.push_back(val);
		}

	
	result=Twosum(nums,9, s);
		//	display
		for(int i=0 ;i<= result.size(); i++)
		{
			std :: cout<<" "<<result[i];
		}
	return 0;
}
