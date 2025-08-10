#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"no ??"<<endl;
	cin>>n;
	cout<<"start"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	//
		cout<<"unshorted array"<<endl;
	int i=0;
	while(i<n)
	{
		cout<<a[i]<<endl;
		i++;
	}
	//insertion sort
	for(int i=1;i<n;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
		    if(a[i]<a[j])
		    {
		       int temp=a[i];
		       for(int k=i;k>j;k--)
		       {
		       	   int t=a[k];
		       	   a[k]=a[k-1];
		       	   a[k-1]=t;
			   }
			}
		}
	}
	cout<<"shorted array"<<endl;
	i=0;
	while(i<n)
	{
		cout<<a[i]<<endl;
		i++;
	}
	
}
