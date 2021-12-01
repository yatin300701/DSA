#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//stack
int top=-1,array[10];
void push()
{
	int data;
	printf("no. to push\n");
	scanf("%d",&data);
	if(top==10)
	{
		printf("not possible\n");
	}
		
	else
	{
		array[top+1]=data;
		top++;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("it is empty\n");
	}
	else
	{
		top=top-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("empty\n");
	}
	else
	{
		printf("stack  is \n");
		for(int i=0;i<=top;i++)
		{
			printf("%d\n",array[i]);
		}
	}
}
int main()
{
	int d=0;
	printf("what you want to do in stack : \n");
	while(d!=-1)
	{
	      	 scanf("%d",&d);
			switch(d)
			{
				case 1:push();
				break;
				case 2: pop();
				break;
				case 3: show();
				break;
				default : exit(0);
			}
		
	}

}
