#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
void append(struct node**head,int new_data,struct node**last)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
		*head=new_node;
		new_node->pre=NULL;
		*last=new_node;
	}
	else
	{
		struct node *temp=*head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->pre=temp;
		*last=new_node;
	}
}
void insertatposition(struct node **head,int position,struct node **last,int new_data)
{
	struct node *temp=*head;
	for(int i=1;i<position-1;i++)
	{
		temp=temp->next;
	}
	struct node *t=*head;
	t=temp->next;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	temp->next=new_node;
	new_node->data=new_data;
	new_node->next=t;
	new_node->pre=temp;
	t->pre=new_node;
}
void print(struct node **head)
{
	struct node *temp=*head;
	while(temp->next)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}
int main()
{
    struct node *head=NULL;
    struct node *last =NULL;
    append(&head,1,&last);
    append(&head,2,&last);
    append(&head,3,&last);
    print(&head);
    insertatposition(&head,2,&last,4);
    printf("new linked list\n");
    print(&head);
    
}
