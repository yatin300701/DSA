#include<iostream>
using namespace std;
int shellshort(int arr[],int n)
{
	for(int gap=n/2;gap>0;gap/=2)             //gap reduction
	{
		for(int i=gap;i<n;i+=1)              // move from gap
		{
			int temp=arr[i];
			int j;
			for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap)
			arr[j]=arr[j-gap];
			
			arr[j]=temp;
		}
	}
}
int main()
{
	int arr[]={12,34,54,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	shellshort(arr,n);
	cout<<"shorted array"<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
