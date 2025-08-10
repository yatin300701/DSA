#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"type no of days"<<endl;
	cin>>n;
	cout<<"types no of visitor each day"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"record breaking days are"<<endl;
	int max=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			
			
			max=a[j];
			if(a[j]>a[j+1])
			{
				cout<<a[j]<<endl;
			}
		}
	}
	
}
