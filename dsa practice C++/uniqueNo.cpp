#include<iostream>
using namespace std;
int uniqueNo(int arr[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^arr[i];
	}
	return xorsum;
}
int main()
{
	int arr[]={2,4,6,3,4,6,2};
	cout<<uniqueNo(arr,7);
}
