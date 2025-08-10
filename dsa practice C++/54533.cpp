#include<stdio.h>
#include<stdlib.h>
struct node
{
	int new_data;
	struct node *next;
};
void insert(struct node **head, int data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->new_data=data;
	struct node *temp=*head;
	new_node->next=NULL;
	
	if(*head==NULL)
	{
		
		*head=new_node;
	}
	else
	{
	//	struct node *p=*head;
	//	struct node *t=*head;
	//	p=p->next;
		while(temp->next!=NULL)
			temp=temp->next;
			temp->next=new_node;
		//	new_node->next=*head;
			
	
	}
	printf("num\n");
}
void traverse(struct node ** head)
{
struct node *p=*head;
	//	struct node *t=*head;
	//	p=p->next;

while(p->next!=NULL)
{
	printf("%d\n",p->new_data);
	p=p->next;
}
	printf("%d\n",p->new_data);
}
int main()
{
	struct node *head=NULL;
	insert(&head,7);
	insert(&head,3);
	insert(&head,8);
	insert(&head,9);
	traverse(&head);
}
