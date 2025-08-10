#include<iostream>
using namespace std;
int main()
{
	int n,a[10];
   cout<<"type n"<<endl;
   cin>>n;
   cout<<"start"<<endl;
   for(int i=0;i<n;i++)
   {
   	  cin>>a[i];
   	  
   }
   int curr;
   cout<<"sum of each subarry"<<endl;
   for(int i=0;i<n;i++)
   {   
      curr=0;
   	  for(int j=i;j<n;j++)
   	  {
   	  	   curr+=a[j];
   	  	   cout<<curr<<endl;
	  }
   }
}
