#include<bits/stdc++.h>
using namespace std;
void reverse(int num)
{
	while(num)
	{
		cout<<num%10;
		num/=10;
	}
}
int main()
{
	reverse(4321);
}
