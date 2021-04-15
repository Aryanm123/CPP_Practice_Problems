#include<stdio.h>
#include<stdlib.h>

struct node//global decleration of structure node
{
	int data;
	struct node *next;
}*start;

void createList(int item)//function to create linked list
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		p=start;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
	}
}

void display()//function to display linked list
{
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}

void deleteFirst()//function to delete first node of linked list
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	p=start;
	start=p->next;
	p->next=NULL;
	free(p);
}

void deleteLast()//function to delete last node of linked list
{
	struct node *p,*temp;
	if(start==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	p=start;
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	temp=p->next;
	p->next=NULL;
	free(temp);
}

void deleteMid(int pos)//function to delete node at specific place from linked list
{
	int i=1;
	struct node *p,*temp;
	if(start==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	p=start;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	temp=p->next;
	p->next=temp->next;
	temp->next=NULL;
	free(temp);
}

void addFirst(int item)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		p=start;
		start=temp;
		start->next=p;
	}
}

void addLast(int item)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		p=start;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
	}
}

void addMid(int item,int pos)
{
	int i=1;
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	temp->next=NULL;
	if(start==NULL)
	{
		printf("List is empty.\n");
		return;
	}
	p=start;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
	temp->next=p->next;
	p->next=temp;
}

void reverse()
{
	struct node *p,*q;
	if(start!=NULL)
	{
		p=start;
		q=start->next;
		start=start->next;
		p->next=NULL;
		while(start!=NULL)
		{
			start=start->next;
			q->next=p;
			p=q;
			q=start;
		}
		start=p;
		printf("Reverse successfull\n");
	}
}

int countnode()
{
	struct node *p;
	int i=0;
	p=start;
	while(p!=NULL)
	{
		p=p->next;
		i++;
	}
	return i;
}


void revdata()
{
	int i,j,k,t;
	struct node *p,*q;
	if(start==NULL)
	printf("Linked list is empty.\n");
	else
	{
	p=q=start;
	i=0;
	j=countnode()-1;
	while(i<j)
	{
		q=start;
		k=0;
		while(k<j)
		{
			q=q->next;
			k++;
		}
		t=q->data;
		p->data=q->data;
		q->data=t;
		p=p->next;
		i++;
		j--;
	}
    }
    printf("Data swapped successfull.\n");
}

int main()
{
	int choice,data,position;
	do
	{
		printf("1.Create List\n2.Display\n3.Delete First Node\n4.Delete Last Node\n5.Delete Middle Node\n6.Add node at begining.\n7.Add node at last\n8.Add node in middle\n9.Reverse Linked List\n10.Count the number of node\n11.Reverse Linked list by swapping data.\n12.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the Data : ");
				scanf("%d",&data);
				createList(data);
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				deleteFirst();
				break;
				
			case 4:
				deleteLast();
				break;
				
			case 5:
				printf("Enter the position to delete : ");
				scanf("%d",&position);
				deleteMid(position);
				break;
				
			case 6:
				printf("Enter the data : ");
				scanf("%d",&data);
				addFirst(data);
				break;
				
			case 7:
				printf("Enter the data : ");
				scanf("%d",&data);
				addLast(data);
				break;
				
			case 8:
				printf("Enter the data and position : \n");
				scanf("%d%d",&data,&position);
				addMid(data,position);
				break;
				
			case 9:
				reverse();
				break;
			
			case 10:
			    printf("The total number of nodes are : %d\n",countnode());
				break;	
			
			case 11:
				revdata();
				break;
		}
	}while(choice!=12);
}
