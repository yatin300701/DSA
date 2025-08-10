#include<iostream>
using namespace std;
int sum(int n)
{
	//base case
	if(n==1)
	return 1;

	else
	{
			
		int sumno=n+sum(n-1);
		return sumno;
	}
}
int main()
{
cout<<	sum(4);
}
