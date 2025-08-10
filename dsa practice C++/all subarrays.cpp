#include<iostream>
using namespace std;
int main()
{
	int n,num,a[10];
	cout<<"type n"<<endl;
	cin>>n;
	cout<<"type "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"subarray "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k];
			}
			cout<<endl;
		}
		
	}
}
