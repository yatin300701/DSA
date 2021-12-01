#include<iostream>
using namespace std;
int main()
{
	int r, c;
	cout<<"type r"<<endl;
	cin>>r;
	cout<<"type c"<<endl;
	cin>>c;
	int a[r][c];
	cout<<"start"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int num;
	cout<<"no you want "<<endl;
	cin>>num;
	int i=0,j=c-1;
	while(i<r&&j>=0)
	{
		if(a[i][j]>num)
		{
			j--;
		}
		else if(a[i][j]<num)
		{
			i++;
		}
		else if(a[i][j]==num)
		{
			cout<<"i = "<<i<<" j = "<<j;
			return 0;
		}
	}
	cout<<"not found";
}
