#include<stdio.h>
#include<stdlib.h>                       //circilar lonked list
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
void insertion(struct node **head,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	if(*head==NULL)
	{
		*head=new_node;
	}
	else
	{
		struct node *temp=*head;
		while(temp->next)
		temp=temp->next;
		temp->next=new_node;
		new_node->next=*head;
		new_node->pre=temp;
	}
}
void print(struct node **head)
{
	struct node *temp=*head;
	printf("%d\n",temp->data);
	temp=temp->next;
	while((temp->next)!=*head)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
//	printf("%d\n",temp->data);
}
int main()
{
	struct node *head=NULL;
	insertion(&head,45);
	insertion(&head,65);
	insertion(&head,4);
	insertion(&head,6);
	print(&head);
	
}
