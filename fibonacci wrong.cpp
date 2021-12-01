#include<iostream>
using namespace std;
int  fibonacci(int n)
{
	if(n==0||n==1)
	{
		cout<<n<<" ";
		return n;
	}
	else
	{
		int s=fibonacci(n-1)+fibonacci(n-2);
		cout<<s<<" ";
		return s;
	}
}
int main()
{
	fibonacci(5);
}
