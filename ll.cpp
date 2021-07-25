#include<stdio.h>
#include<stdlib.h>
void createList(int);
void display();
struct node
{
	int data;
	struct node *next;
}*start=NULL;

int main()
{
	int choice,data;
	while(1)
	{
		printf("\nLinked List : To create and display singly linked list\n");
		printf("\n------------------------------------------------------\n");
		printf("1.Create List\n");
		printf("2.Display\n");
		printf("3.Exit\n");
		printf("Select your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data : ");
				scanf("%d",&data);
				createList(data);
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				exit(1);
				break;
				
			default:
				printf("Wrong choice");
		}
	}
}

void createList(int value)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	
	if(start==NULL)
	start=temp;
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			p=p->next;
			p->next=temp;
		}
	}
}

void display()
{
    struct node *p;
    if(start == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        p = start;
        while(p != NULL)
        {
            printf(" Data = %d\n", p->data);       // prints the data of current node
            p = p->next;                     // advances the position of current node
        }
    }
}
