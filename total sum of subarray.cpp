#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"type size neede d"<<endl;
	cin>>n;
	cout<<"type no -"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"sum of each"<<endl;
	int sum1=0,sum=0,sumsub=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum1=sum+a[j];
			sumsub=sum+sum1;
			sum=sum1;
			cout<<sumsub<<endl;
		}
	}
	cout<<"subaray sum is : "<<sumsub;
}
