#include<iostream>
using namespace std;
int main()
{
		int r1,c1;
	cout<<"type r ="<<endl;
	cin>>r1;
	cout<<"type c = "<<endl;
	cin>>c1;
	int a[r1][c1];
	cout<<"type matrix "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
		//cout<<endl;
	}
cout<<"you typed "<<endl; 
	for(int i=0;i<r1;i++)
	{	
		for(int j=0;j<c1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
		int r2,c2;
	cout<<"type r ="<<endl;
	cin>>r2;
	cout<<"type c = "<<endl;
	cin>>c2;
	int b[r2][c2];
	cout<<"type matrix "<<endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
		//cout<<endl;
	}
cout<<"you typed "<<endl; 
	for(int i=0;i<r2;i++)
	{	
		for(int j=0;j<c2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	if(c1==r2)
	{
		int c[r1][c2];
		cout<<"multiplication possible"<<endl;
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{  
			   c[i][j]=0;
				for(int k=0;k<c1;k++)
				{
					c[i][j]=(a[i][k]*b[k][j])+c[i][j];
				}
				cout<<c[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"not possible";
	}
	
}
