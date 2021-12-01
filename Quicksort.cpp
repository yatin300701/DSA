#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high)
{
	int pivot =arr[high];
	int i=low-1;
	for(int j=low;j<=high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
void quickshort(int arr[],int low, int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quickshort(arr,low,pi-1);
		quickshort(arr,pi+1,high);
	}
}
void print(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[]={2,10,5,4,9,8,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickshort(arr,0,n-1);
	cout<<"Shorted array "<<endl;
	print(arr,n);
}
