#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node
{
	int data;
	struct node *next;
};

void append(struct node* *head,int new_data)
{
	struct node *new_node= (struct node*)malloc(sizeof(struct node));
	struct node *temp=*head;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
		*head=new_node;
		
	}
	else
	{
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=new_node;
	}
}
void push(struct node* *head,int new_data)
{
	struct node *new_node =(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=*head;
	*head=new_node;
}
//void insertAfter(struct node *
void print(struct node* *head)
{

	struct node *temp=*head;
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}

int main()
{
		struct node *head=NULL;
//	*head=NULL;
	append(&head,7);
	append(&head,8);
	append(&head,5);
	push(&head,6);
	print(&head);
}
