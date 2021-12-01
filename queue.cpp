#include<stdio.h>
#include<conio.h>
int a[100],front=-1,back=-1;
void enqueue(int data)
{
	if(front==-1)
	{
		front++;
		back++;
		a[front]=data;
	}
	else if(front==100)
	{
		printf("overflowed\n");
	 } 
	else
	{
		a[front+1]=data;
		front++;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("is empty\n");
	}
	else if(front==0)
	{
		front--;
		back--;
	}
	else
	{
		front--;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("is empty\n");
	}
	else
	{
		printf("%d\n",a[front]);
	}
}
int isempty()
{
	if(front==-1)
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	enqueue(12);
	enqueue(2);
	enqueue(5);
	enqueue(17);
	enqueue(29);
	enqueue(50);
	dequeue();
	printf("%d",isempty);
	
}
