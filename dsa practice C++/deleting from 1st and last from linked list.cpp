#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void append(struct node**head,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;
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
		
	}
}
void print(struct node **head)
{
	struct node *temp=*head;
	while(temp->next!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}
void deleteFromStart(struct node **head)
{
	struct node *temp=*head;
	*head=head->next;
	free(temp);
}
void deleteFromEnd(struct node **head)
{
	struct node *temp=*head;
	struct node *post=temp->next;
	while(post->next!=NULL)
	{
		temp=temp->next;
		post=post->next;
	}
	free(post);
	temp->next=NULL;
}
int main()
{
	struct node *head=NULL;
	append(&head,3);
	append(&head,5);
	append(&head,7);
	append(&head,8);
	printf("linked list :\n");
	print(&head);
	deleteFromStart(&head);
	printf("after 1st deleting\n");
	print(&head);
	deleteFromEnd(&head);
	printf("after last deleting :\n");
	print(&head);
}
