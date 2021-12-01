#include<iostream>
using namespace std;
int main()
{
   int a[10],n;
   cout<<"type n "<<endl;
   cin>>n;
   cout<<"type no."<<endl;
   for(int i=0;i<n;i++)
   {
   	   cin>>a[i];
   }
   int c[n];
    for(int i=0;i<n;i++)
   {
   	   c[i]=0;;
   }
   for(int i=0;i<n;i++)
   {
   	   int j=a[i];
   	   c[j]=c[j]+1;
   }
   cout<<"repeating no is ";
   for(int i=0;i<n;i++)
   {
   	   if(c[i]>1)
   	   {
   	   	cout<<a[i];
   	   	return 0;
	  }
   }
   
   cout<<"the array has no repeating no."<<endl;
   return 0;
}

