#include <iostream>

bool Palindrome (int &x)
{
	int temp=x
		,digit,
		reverseNum=0;
		while (temp>0)
		{
			digit=temp%10;
			reverseNum= (reverseNum*10)+digit;
			temp=temp/10;
		}
			//	Checkout comperison
		if(x==reverseNum)
		return 1;
		else
			return 0;

}

int main()
{
	std :: cout<<"Enter the number to check whether it is Palindrome or Not!\n";
	int num;
	std :: cin>> num;

	std :: cout<<"\nOutput : "<<Palindrome(num);
	return 0;


}
