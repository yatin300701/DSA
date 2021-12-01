#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int l;
	cout<<"type how many char "<<endl;
	cin>>l;
	int len;
    len=l+1;
	char a[len];
	cin>>a;
//	int len = strlen(a);
	char b[len];
	for(int i=len-2;i>=0;i--)
	{
		b[len-i-2]=a[i];
	//	cout<<b[len-i-1]<<" is at "<<len-2-i<<endl;
		
	}
	if(strcmp(b,a)==0)
	{
		cout<<"yes it is";
	}
	else
	cout<<"no";
}
