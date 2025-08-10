#include<bits/stdc++.h>
using namespace std;
int factorial(int num);
void noOfDigitsInFactorial(int num)
{
	int fON=factorial(num);	                    //factorial of a num =fON
	int size=0;
	while(fON)
	{
		size++;
		fON/=10;
	}
	cout<<size;
	
}
int factorial(int num)
{
	int sum=0;
	if(num==1)
	return 1;
	else
	{
		int d=num-1;
		sum=factorial(d)*num+sum;
	}
	return sum;
}
int main()
{
	noOfDigitsInFactorial(5);
}
