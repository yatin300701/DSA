#include<bits/stdc++.h>
//doubly linked list isertion
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
void append(struct node**head,int new_data,struct node **last )
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	struct node *temp=*head;
	new_node->data=new_data;
	new_node->next=NULL;
	if(*head==NULL)
	{
		*head=new_node;
		*last=new_node;
		new_node->pre=NULL;
	}
	else
	{
		while((temp->next)!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		*last=new_node;
		new_node->pre=temp;
	}
}
void print(struct node **head)
{
	struct node *temp=*head;
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d\n",temp->data);
}
void insertAt1st(struct node**head,int new_data)
{
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	struct node *temp=*head;
	new_node->data=new_data;
	new_node->next=temp;
	new_node->pre=NULL;
	
	*head=new_node;
}
void insertAtLast(struct node**last,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	struct node *temp=*last;
	temp->next=new_node;
	new_node->data=new_data;
	new_node->next=NULL;
	new_node->pre=temp;
	*last=new_node;
}

int main()
{
	struct node *head =NULL;
	struct node *last=NULL;
	append(&head,3,&last);
	append(&head,5,&last);
	append(&head,6,&last);
	printf("linked list :\n");
	print(&head);
	insertAt1st(&head,1);
	insertAtLast(&last,1);
	printf("after insertion at head and last\n");
	print(&head);
}
