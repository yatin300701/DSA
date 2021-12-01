#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
void create(struct node **head,int new_data,struct node **tail )
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
		*head=new_node;
		*tail=new_node;
		new_node->pre=NULL;
	}
	else
	{
		struct node *temp=*head;
		while((temp->next)!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->pre=temp;
		*tail=new_node;
		
	}
	
}
void printh(struct node **head)
{
	struct node *temp=*head;
	while((temp->next)!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
    	printf("%d\n",temp->data);
}
void printt(struct node **tail)
{
	struct node *temp=*tail;
	while((temp->pre)!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->pre;
	}
    	printf("%d\n",temp->data);
}
int main()
{
	struct node *head =NULL;
	struct node *tail=NULL;
	create(&head,3,&tail);
	create(&head,5,&tail);
	create(&head,7,&tail);
	printf("using head , print all struct members\n");
	printh(&head);
	printf("using tail\n");
	printt(&tail);
	
}
