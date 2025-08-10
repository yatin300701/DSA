#include<iostream>
using namespace std;
void unique3(int arr[],int n)
{
	int temp[5];
	for(int i=0;i<5;i++)
	temp[i]=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<n;j++)
		{
		     	if(arr[j]&1<<i)
		     	{
		     		temp[i]++;
				 }
		}
    }
    int sum=0;
    	for(int j=0;j<5;j++)
		{
		     	if((temp[j]%3)!=0)
		     	{
		     		sum=sum|1<<j;
				 }
		}
		cout<<sum;
}
int main()
{
	int arr[]={1,3,2,3,6,4,2,1,1,3,2,4,4};
	unique3(arr,11);
}
