#include<iostream>
using namespace std;
int main()
{
	int a[10],n,num,sum=0;
	cout<<"type n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"wht to search"<<endl;
	cin>>num;
	int i=0;int j=0;
    while(sum<=num)
	{
	     sum=sum+a[i];
	     if(sum==num)
	     {
	     	cout<<"sum btw "<<j+1<<" "<<i+1;
	     	return 0;
		 }
		 i++;
	}
	cout<<"sum= "<<sum<<endl<<"i = "<<i<<endl;//
	
//	sum=sum;
	while(sum>=num)
	{
		sum=sum-a[j];
		j++;
		if(sum==num)
		{
			cout<<"sum btw "<<j+1<<" "<<i;
			return 0;
		}
		
		
	}
	cout<<"not possible";
}
