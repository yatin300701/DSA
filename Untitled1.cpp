#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next ;
	struct node *pre;
};
void insert(struct node **head,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
	//	struct node *temp=*head;
		*head=new_node;
	//	temp->next=new_node;
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
	}
}
void print(struct node **head)
{
	struct node *temp=*head;
	while((temp->next)!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}
void deletion(struct node **head, int position )
{
	struct node *temp=*head;
	if(position>5)
	{
		printf("sorry not possible ");
		return;
	}
	if(position>2&&position<6)
	{
		position--;
		
	while(position>1)
	{
		temp=temp->next;
		position--;
	}
//	printf("%d\n",temp->data);
	struct node *pp=temp->next;
	struct node *pt=pp->next;
	if (pp==NULL)
	{
		temp->next=NULL;
		free(pp);
	}
	pt->pre=temp;
	temp->next=pt;
	free(pp);
    }
    
}
int main()
{
	struct node *head=NULL;
	insert(&head,34);
	insert(&head,56);
	insert(&head,4);
	insert(&head,6);
	insert(&head,45);
	insert(&head,67);
	print(&head);
	deletion(&head,5);
	printf("after deleting :\n");
	print(&head);	
}
