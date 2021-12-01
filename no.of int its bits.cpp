#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int n;
//	int pos=0;
	cin>>n;
	
	while(n)
	{
		if(n&1)
		count++;
		n=n>>1;
	//	pos++;
	}
	cout<<count;
}
