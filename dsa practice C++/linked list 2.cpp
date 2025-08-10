#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void append(struct node* *head, int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	struct node *last =*head;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
		*head=new_node;
		return;
		
	}
	while(last->next!=NULL)
	{
		last =last->next;
	}
	last->next=new_node;
	return;
}
void printList(struct node *node)
{
	while(node!=NULL)
	{
		printf("%d",node->data);
		node=node->next;
	}
}
int main()
{
	struct node *head=NULL;
	append(&head,6);
	append(&head,8);
	printf("\n Created list\n");
	printList(head);
}
