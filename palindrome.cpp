#include<bits/stdc++.h>

using namespace std;
bool isPalindrome(int num)
{
	int sum;
	int temp=num;
	while(num)
	{
		sum=(sum*10)+(num%10);
		num/=10;
	}
	if(sum==temp)
	return 1;
	else return 0;
}
int main()
{
	cout<<isPalindrome(1821);
}
