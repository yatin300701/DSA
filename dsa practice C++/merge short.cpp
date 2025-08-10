#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid-1);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid, high);
	}
}
void merge(int arr[],int low,int mid,int high)
{
	int n1=mid-low;
	int n2=high-mid;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=arr[low+i];
	}
	for(int i=0;i<n2;i++)
	{
		R[i]=arr[mid+i];
	}
	int i=0,j=0,k=low;
	while( i<n1&&j<n2)
	{
		if(L[i]>=R[i])
		{
		arr[i]=L[i];
	    i++;
		}
		else
		{
		arr[i]=R[i];
	    j++;
    	}
    	k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}
int main()
{
	int arr[]={12,45,23,6,78,9,67};
	mergesort(arr,0,7);
	for(int i=0;i<7;i++)
	cout<<arr[i]<<endl;
}
