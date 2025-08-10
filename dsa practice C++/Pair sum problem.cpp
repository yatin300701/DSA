#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, a[10],num,temp;
	cout<<"type n"<<endl;
	cin>>n;
	cout<<"start"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	int st=0,en=0;
	int sum=0;
	cout<<"find num"<<endl;
	cin>>num;
//	//for(int i=0;i<n;i++)
//	{
//		for(int j=i;j<n;j++)
//		{                                            // check
//			if(a[i]>a[j])
//			{
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
	//
	while(sum<num&&en<n)
	{
		sum=a[st]+a[en];
		if(sum==num)
		{
			cout<<"sum of "<<a[st]<<" "<<a[en];
			return 0;
		}
		en++;
		cout<<"en "<<en<<endl<<"sum = "<<sum<<endl; 
	}
	en--;
	while(sum!=num&&st<n)
	{
		sum=a[st]+a[en];
		if(sum==num)
		{
			cout<<"sum of "<<a[st]<<" "<<a[en];
			return 0;
		}
		st++;
		cout<<"st "<<st<<endl<<"sum = "<<sum<<endl;
	}
	cout<<"not possible";
	return 0;
}
