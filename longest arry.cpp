#include<iostream>
using namespace std;
int main()
{
	int num,a[20], max=0,st=0,en=0,len=0;
	
	cout<<"type size of array"<<endl;
	cin>>num;                          //1st no
	cout<<"tpe arry"<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>a[i];           //array
	}
	int pre_d=a[1]-a[0];
	for(int i=0;i<num-1;i++)
	{
		for(int j=1;j<num;j++)
		{
			int d=a[i]-a[j];
			int pre_d;               //pre_d
			if(pre_d==d)
			{
				
				len++;
				en++;
				
			}
			else
			{
			   if(len>max)
			   {
			   	max=len;
			   	
			   	
			   }
			   else
			   {
			   	    st=i;
			   	    en=j;
			   	    pre_d=a[i]-a[j];
			   	    
			   }
			   
			}
		}
	}
	cout<<"longest array is "<<endl;
	cout<<"size ="<<max<<endl;
	for(int i=st;i<=en;i++)
	{
		cout<<a[i]<<endl;
	}
}
