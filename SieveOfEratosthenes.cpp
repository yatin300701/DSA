#include<iostream>
using namespace std;
void soe(int n)
{
	int prime[100];
	for(int i=0;i<100;i++)
	prime[i]=0;
	for(int i=2;i<n;i++)
	{
		if(prime[i]==0)
		{
			for(int j=2*i;j<=n;j=j+i)
			{
				prime[j]++;
			//	cout<<j<<" ";
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==0)
		cout<<i<<endl;
	}
}
int main()
{
	soe(15);
}
