#include<iostream>
using namespace std;
int main()
{
	int n, a[10],e=0,s=0,st=0,en=0,len=0,leng=0,d,max;
	cout<<"type n"<<endl;
	cin>>n;
	cout<<"start typing -"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	{
		for(int j=1;j<n;j++)
		{
			if((a[j]-a[j-1])==d)
			{
				e = e+1;
				len++;
				if(max<len)
				{
					st=s;
					en=e;
					leng=len;
					max=len;
				}
			}
			else
			{
				s=j;
				d=a[j]-a[j-1];
				e=j+1;
				len=2;
				
			}
		}
	}
	cout<<"max leng "<<leng<<endl<<"starting point "<<st<<endl;
	cout<<"end point "<<en<<endl;
}
