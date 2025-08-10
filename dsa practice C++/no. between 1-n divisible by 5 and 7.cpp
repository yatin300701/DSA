#include<iostream>
using namespace std;
void divisible(int n)
{
	int a=n/5;
	int b=n/7;
	int c=n/(5*7);
	cout<<a+b-c;
}
int main()
{
	divisible(40);
}
