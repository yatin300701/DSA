#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a[10];
	cout<<"type n"<<endl;
	cin>>n ;
	cout<<"start 1"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min_idx=INT_MAX;
	int N=1e6+2;
	int c[N];
	for(int i=0;i<N;i++)
	{
		c[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		if(c[a[i]]!=-1)
		{
			min_idx=min(min_idx,c[a[i]]);
			cout<<"check min"<<min_idx<<endl;
			
		}
		else
		{
			c[a[i]]=i;
			cout<<"initialise c"<<c[a[i]]<<endl;
		}
	}
	if(min_idx==INT_MAX)
	{
		cout<<"-1";
	}
	else
	{
		cout<<"repeating is "<<min_idx<<endl;
	}
}
