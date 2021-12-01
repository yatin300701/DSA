#include<iostream>
using namespace std;
void maxOccurance(string s)
{
	int temp[26];
	for(int i=0;i<26;i++)
	temp[i]=0;
	int max=0;
	char max_element;
	for(int i=0;i<s.length();i++)
	{
		temp[s[i]-'a']=temp[s[i]-'a']+1;
		if(max<temp[s[i]-'a'])
		{
				max=temp[s[i]-'a'];
				max_element='a'+s[i]-'a';
		}
	}
		cout<<"max "<<max<<" char is "<<max_element<<endl;
}
int main()
{
	string s1="aabcababbbb";
	maxOccurance(s1);
}
