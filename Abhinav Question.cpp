#include<bits/stdc++.h>
using namespace std;
int main()
{
	int in=4;
	double b=4.0;
	string s="Hakerearth ";
	int ad;
	double ab;
	cin.ignore();
	char ch[50];
	cin.getline(ch,50);
	cin.ignore();
	cin>>ad;
	cin>>ab;
    
	cout<<setprecision(1);
	cout<<ad+in<<endl<<ab+b<<endl;
	int i=0;
	while(ch[i]!='\n')
	{
		cout<<ch[i];
		i++;
	}
	
}
