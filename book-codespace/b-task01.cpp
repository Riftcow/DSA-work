#include<iostream>
	//	using generic type template for function for compiler to understand which type of data is required int , float or etc...
template<class T>
	T result(T x,T y, T z)
{
	return ((x+y)*z)/3;
}
int main()
{
	std ::cout<<"Helo\n";
	
	int a=1,
		b=3,
		c=5;
	auto sum=result<float>(a,b,c);
	
	std :: cout<<"Result is = " << sum;
	return 0;
}
