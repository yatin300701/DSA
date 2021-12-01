#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"type r ="<<endl;
	cin>>r;
	cout<<"type c = "<<endl;
	cin>>c;
	int a[r][c];
	cout<<"type matrix "<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
		//cout<<endl;
	}
cout<<"you typed "<<endl; 
	for(int i=0;i<r;i++)
	{	
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"matrix transpose"<<endl;
	for(int i=0;i<r;i++)
	{	
		for(int j=0;j<c;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
