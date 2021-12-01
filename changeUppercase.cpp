#include<iostream>
using namespace std;
void changeUppercase(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a')
		{
			s[i]=s[i]-32;
		}
		
	}
	cout<<s<<endl;
}
void changeLowercase(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'a')
		{
			s[i]=s[i]+32;
		}
	}
	cout<<s<<endl;
}
int main()
{
	string s="vchhHhBHJBhjVhV";
	changeUppercase(s);
	changeLowercase(s);
	
}
