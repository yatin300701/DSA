#include<iostream>
using namespace std;
int  noOf1(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n&n-1;
		count++;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	cout<<"no of ones in "<<n<<" are "<<noOf1(n);
}
