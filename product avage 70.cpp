#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count =0;
	for(int i=1;i<160;i++)
	{
			for(int j=1;j<160;j++)
			{
				if((i+j)/2==70)
				{if(i!=j)
				{
					count++;
					cout<<i<<" "<<j<<endl;
				}
				}
				
				
			}
		
	}
	cout<<count;
}
