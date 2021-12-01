#include<bits/stdc++.h>
using namespace std;
void reverseTheWholeNo(int num)
{
	int sum=0;
	while(num)
	{
		sum=(sum*10)+(num%10);
		num/=10;
	}
	cout<<sum;
}
int main()
{
	reverseTheWholeNo(1234);
}
