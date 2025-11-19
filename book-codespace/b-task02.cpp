#include <iostream>
template<typename T>

T ValueCounter(T arr[], T size, T value )
{
	int counter=0;
	for(int i=0 ;i<size; i++)
	{
		if(value==arr[i])
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int size;
	std :: cout<<"Enter the size of array\n";
	std :: cin>>size;

	int arr[size];
		std :: cout<<"Enter value to array  | Limit is "<<size<<"\n";
		for (int i=0;i<= size-1;i++)
		{
			std :: cin>>arr[i];
		}

	int val;
	std :: cout<<"\n Enter the value to check the Occurance\n\n\t";
	std :: cin>> val;
	std :: cout<<"\n Occurance is "<< ValueCounter <int>(arr, size,val);
		return 0;
}
