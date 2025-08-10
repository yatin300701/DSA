#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
	int sum;
	if(num==1)
	return 1;
	else
	{
		int s=num-1;;
		sum=factorial(s)*num;
	}
	return sum;
}
int main()
{
	cout<<factorial(6);
}
