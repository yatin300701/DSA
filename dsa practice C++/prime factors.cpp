#include<iostream>
using namespace std;
void primefactor(int n)
{
	int spd[100];
	for(int i=0;i<100;i++)
	{
		spd[i]=0;
	}
    for(int i=2;i<n;i++)
    {
    	if(spd[i]==0)
    	{
	    	for(int  j=i*2;j<n;j=j+i)
			{
				spd[j]++;
			}	
	    
	    }
	}
	for(int i=2;i<n;i++)
	{
		if(spd[i]==0)
		{
			if(n%i==0)
			cout<<i<<endl;
		}
	}
}
int main()
{
	primefactor(30);
}
