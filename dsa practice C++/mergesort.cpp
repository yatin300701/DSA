#include<iostream>
using namespace std;
void mearge(int arr[],int l,int m,int r)          //l=initial m=mid r=end
{
	int n1=m-l+1;
	int n2=r-m;
	//create temp array
	int L[n1],R[n2];
	//copy data
	int i=0,j=0,k=1;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
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
void mergeshort(int arr[],int l, int r)
{
	if(l>=r)
	{
		return ;//return recursively
	}
	int m=(l+r-1)/2;
	mergeshort(arr,l,m);
	mergeshort(arr,m+1,r);
	mearge(arr,l,m,r);
}
int main()
{
	int arr[]={12,43,2,54,6,7};
	int arr_size=sizeof(arr)/sizeof(arr[0]);
	cout<<"after sorting"<<endl;
	mergeshort(arr,0,arr_size-1);
	for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<endl;
}
