#include<stdio.h>
#include<stdlib.h>

void createstack(struct stack **p,int length);
void push(struct stack *p,int value);
void pop(struct stack *p);
void peep(struct stack *p);
void display(struct stack *p);
struct stack
{
	int size;
	int top;
	int *ptr;
};

int main()
{
	int n,choice,item;
	struct stack *s;
	s=(struct stack *)malloc(sizeof(struct stack));
	printf("Enter the size of stack you want : ");
	scanf("%d",&n);
	createstack(&s,n);
	do
	{
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEP\n5.EXIT\n");
		printf("Select your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the item : ");
				scanf("%d",&item);
				push(s,item);
				break;
			
			case 2:
				pop(s);
				break;
				
			case 3:
				display(s);
				break;
				
			case 4:
				peep(s);
				break;
				
			default:
				printf("Wrong Choice.\n");
				break;
		}
	}while(choice!=5);
}

void createstack(struct stack **p,int length)
{
	(*p)->top=-1;
	(*p)->size=length;
	(*p)->ptr=(int*)malloc(length*sizeof(int));
}

void push(struct stack *p,int value)
{
	if(p->top==p->size-1)
	{
		printf("Stack is Overflow.\n");
		return;
	}
	p->top++;
	p->ptr[p->top]=value;
}

void pop(struct stack *p)
{
	int item;
	if(p->top==-1)
	{
		printf("Stack is underflow.\n");
		return;
	}
	item=p->ptr[p->top];
	printf("Popped element is : %d\n",item);
	p->top--;
}

void peep(struct stack *p)
{
	int item;
	if(p->top==-1)
	{
		printf("Stack is underflow.\n");
		return;
	}
	item=p->ptr[p->top];
	printf("Element is : %d\n",item);
}

void display(struct stack *p)
{
	int i;
	if(p->top==-1)
	{
		printf("Stack is empty.\n");
		return;
	}
	printf("Elements are :\n");
	for(i=p->top;i>=0;i--)
	printf("%d\n",p->ptr[i]);
}
