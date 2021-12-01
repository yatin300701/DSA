#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2;
	int sum=n1+n2;
	int n=sum;
	int m=sum;
	int count;
	n++;
	while(n)
	{
		count=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				count++;
			}
			
		}
		if(count==0)
		{
			cout<<n-m;
			return 0;	
		}
	
		n++;
	}
	return 0;
}
