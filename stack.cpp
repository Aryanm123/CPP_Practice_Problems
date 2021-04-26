#include<stdio.h>
#define MAX 10
struct stack
{
	int top;
	int a[MAX];
};

void push(struct stack *p,int value);
void pop(struct stack *p);
void display(struct stack *p);
void peep(struct stack *p);

int main()
{
	int choice,item;
	struct stack s1;
	s1.top=-1;
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
				push(&s1,item);
				break;
			
			case 2:
				pop(&s1);
				break;
				
			case 3:
				display(&s1);
				break;
				
			case 4:
				peep(&s1);
				break;
				
			default:
				printf("Wrong Choice.\n");
				break;
		}
	}while(choice!=5);
}

void push(struct stack *p,int value)
{
	if(p->top==MAX-1)
	{
		printf("Stack is overflow\n");
		return;
	}
	p->top++;
	p->a[p->top]=value;
}

void pop(struct stack *p)
{
	int value;
	if(p->top==-1)
	{
		printf("Stack is empty.\n");
		return ;
	}
	value=p->a[p->top];
	p->top--;
	printf("Popped item is : %d\n",value); 
}

void display(struct stack *p)
{
	int i;
	if(p->top==-1)
	{
		printf("Stack is empty.\n");
		return;
	}
	for(i=p->top;i>=0;i--)
	printf("%d\n",p->a[i]);
}

void peep(struct stack *p)
{
	if(p->top==-1)
	{
		printf("Stack is empty.\n");
		return;
	}
	printf("Peeped element is : %d\n",p->a[p->top]);
}
