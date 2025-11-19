#include <iostream>

int LinearSearch( int *arr, int s, int val)
{
	for(int i=0 ;i<s ;i++)
	{
		if(val==arr[i])
		{
			return i;
		}
		else
			return -1;
	}
}

int main()
{

	int array[5];
	int size,
		value;
	std :: cout<<"Enter the size of Array \n";
	std :: cin>> size>> value;
	
	size = sizeof(array);
	
int result =LinearSearch(array,size, value);	
		std :: cout<<" \n\n\t"<<result;
	return 0;
}
