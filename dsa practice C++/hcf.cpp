#include<iostream>
using namespace std;
void hcf(int a ,int b)
{
	while(a!=0&&b!=0)
	{
		if(a>b)
		a=a%b;
		else
		b=b%a;
	}
	a>b?cout<<a:cout<<b;
}
int main()
{
	hcf(42,24);
}
