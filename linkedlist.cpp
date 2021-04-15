#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;                        //Data of the node
    struct node *next;           //Address of the next node
}*start;

void createList(int n); // function to create the list
void display();         // function to display the list
void addNodeFirst();    // functiom to add node at first position
void addNodeLast();     // function to add node at last
void addNodePos();

int main()
{
    int n,choice,position;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");
		while(1)
		{
			printf("1.Create List\n");
			printf("2.Display\n");
			printf("3.Add node at first position\n");
			printf("4.Add node at last position\n");
			printf("5.Add node at given position\n");
			printf("6.Exit\n");
			printf("Enter your choice : ");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf(" Input the number of nodes : ");
                    scanf("%d", &n);
                    createList(n);
                    break;
                    
                case 2:
                	printf("\n Data entered in the list : \n");
                    display();
                    break;
                    
                case 3:
                	addNodeFirst();
                	break;
                /*	
                case 4:
                	addNodeLast();
                	break;
                	
                case 5:
                	addNodePos();
                	break;
                */	
                case 6:
                	exit(0);
                	break;
                	
                default:
                	printf("Wrong Choice");
                	break;
			}
		}
    /*printf(" Input the databer of nodes : ");
    scanf("%d", &n);
    createList(n);
    printf("\n Data entered in the list : \n");
    display();*/
    return 0;
}
void createList(int n)
{
    struct node *temp, *p;
    int data, i;
    start = (struct node *)malloc(sizeof(struct node));

    if(start == NULL) //check whether the temp is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &data);
        start->data = data;      
        start->next = NULL; // links the address field to NULL
        p = start;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            if(temp == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &data);
 
                temp->data = data;      // links the data field of temp with data
                temp->next = NULL; // links the address field of temp with NULL
 
                p->next = temp; // links previous node i.e. p to the temp
                p = p->next; 
            }
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

void addNodeFirst()
{
    struct node *temp, *p;
    int data;
    temp = (struct node *)malloc(sizeof(struct node));

    if(start == NULL) //check whether the temp is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node : ");
        scanf("%d", &data);
        temp->data = data;      
        temp->next = NULL; // links the address field to NULL
        p = start->next;
        start = temp; // links previous node i.e. p to the temp
        start->next = p;
		free(temp);
		temp=NULL; 
        }
}
