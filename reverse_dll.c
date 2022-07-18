/***************************Reverse a double linked list*******************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}dll;


void insert(dll **head,int data);
void print(dll **head);
void reverse_list(dll **head);

int main()
{
	dll *head = NULL;
	int option,data;
	while(1)
	{
		printf("Enter the option\n1.Insert\n2.Print\n3.Reverse_list\n4.Exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:printf("Enter the data:");
			       scanf("%d",&data);
			       insert(&head,data);
			       break;
			case 2:print(&head);
			       break;
			case 3: reverse_list(&head);
				break;
			case 4: exit(0);
				break;
			default: printf("Invalid option\n");
				 break;
		}
	}
	return 0;
}

void insert(dll **head,int data)
{
	dll *new=(dll *)malloc(sizeof(dll));
	if(new == NULL)
	{
		printf("Memory is not allocated\n");
	}
	else
	{
		new->data = data;
		new->prev = NULL;
		new->next = NULL;
		if(*head == NULL)
		{
			*head = new;
		}
		else
		{
			dll *temp = *head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new;
			new->prev = temp;
		}
	}
}

void print(dll **head)
{
	dll *temp = *head;
	if(*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("List contans:\n");
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

void reverse_list(dll **head)
{
	dll *current = *head,*temp = (*head)->next;
	if(*head == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(current != NULL)
		{
			current->next = current->prev;
			current->prev = temp;
			if(temp == NULL)
			{
				*head = current;
			}              
			current = temp;
			if(temp != NULL)
			temp = temp->next;
		}
	}
}
