#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
void insert(struct node **head,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=NULL;

	if(*head==NULL)
	{
	
		struct node *temp=*head;
			*head=new_node;
		new_node->pre=NULL;
	}
	else
	{
		struct node *temp=*head;
	
		while(temp->next)
		temp=temp->next;
		temp->next=new_node;
		new_node->pre=temp;
	}
	
}
void print(struct node**head)
{
	struct node *temp=*head;                   
	while((temp->next)!=NULL)
	{
		printf("%d\n",temp->data);
	}
	printf("%d\n",temp->data);
	printf("yes\n");
}
void delete_(struct node **head, int pos)
{
	struct node *temp=*head;
	while(pos)
	{
		temp=temp->next;
		pos--;
	}
	struct node *pp=temp;
	pp=temp->next;
	struct node *j=pp;
	j=pp->next;
	
	free(pp);
	temp->next=j;
	j->pre=temp;
}
int main()
{
	//doubly linked list isertion 
	struct node *head=NULL;
	insert(&head,34);
	insert(&head,44);
	insert(&head,6);
	insert(&head,7);
	print(&head);
	printf("now\n");
//	delete_(&head,3);
//	print(&head);
}
