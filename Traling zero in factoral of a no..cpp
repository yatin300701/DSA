#include<bits/stdc++.h>
using namespace std;
void tralingZerosInFactorial(int num)
{
	int d=5;
	int sum=0;
	while(d<num)
	{
		sum=(num/d)+sum;
		d=d*5;	
    }
	cout<<"no of zeroes are : "<<sum;
}
int main()
{
	tralingZerosInFactorial(126);
}
