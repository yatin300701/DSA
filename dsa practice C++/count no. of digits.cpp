#include<bits/stdc++.h>
using namespace std;
void count(int num)
{
	int check=0;
	while(num)
	{
		check++;
		num/=10;
	}
	cout<<check;
}
int main()
{
	count(234);
}
