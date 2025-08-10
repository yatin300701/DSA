#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *head ;

struct node *last;
struct node *tem;

int main()
{
	printf("if you want to append a no. in linked list \n dont type 0 \n  ");
	int temp;                        //initialising temp
	scanf("%d",&temp);
	
    head=NULL;                      //initialising head
	
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	*last=*head;
	scanf("%d",&new_node->data);
	new_node->next=NULL;
		
	 head = &new_node;
			
		
	while(temp!=0)
	{
		struct node *new_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&new_node->data);
	new_node->next=NULL;
		{
			while(last->next!=NULL)
		    last=last->next;
		    last->next=new_node;
		}
		
		scanf("%d",temp);
    }
    *tem=*head;
    while(tem!=0)
    {
    printf("%d",tem->data);
    tem=tem->next;
    }
		
	
	printf("end");
}
