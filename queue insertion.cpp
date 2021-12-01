#include<iostream>
using namespace std;
int queue[10] , n=10,start=-1 ,end=-1 ;
void deletion(int n)
{
	if(start==-1)
	cout<<"underflow , so no deletion can take place";
	else
	{
	

		int j=n+1;
				for(int i=start;i<=end;i++)
				{
					if(queue[i]==n)
					{
					  j=i;
					  
				    } 
				}
				if(j!=n+1)
				{
					for(int i=j;i<=end;i++)
					{
						queue[i]=queue[i+1];
				
					}
					end--;
				}
				else
				{
					cout<<"not found "<<endl;
				}
				
		
	
	}
}
void insert_in_queue()
{
	int x;
	if(start==n-1)
	{
		cout<<"queue overflowed"<<endl;
		
	}
	else
	{
		
		if(start==-1)
		start=0;
		cout<<"type no . to be inserted "<<endl;
		cin>>x;
		end++;
		queue[end]=x;
		
    }
}
void display()
{
	if(start==-1)
	cout<<"queue is empty"<<endl;
	else
	{
		cout<<"elements in queue are :"<<endl;
		for(int i=0;i<=end;i++)
		{
			cout<<queue[i]<<endl;
		}
	}
}

int main()
{
	int ch;
	cout<<"type 1 for insertion "<<endl;
	cout<<"type 2 for  display  "<<endl;
	cout<<"type 3 for deletion"<<endl;
	
	do
	{
		cin>>ch;
		
				switch(ch)
			{
				case 1:
					insert_in_queue();
					break;
				case 2:
					display();
					break;
				case 3:
					cout<<"type no. to be delete"<<endl;
					int n;
					cin>>n;
					deletion(n);
					break;
					
				default :
					cout<<"invalid "<<endl;
					
			}
	}while(ch<4&&ch>0);
}

