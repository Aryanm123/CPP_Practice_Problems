#include<stdio.h>
void FirstPos(int*,int,int*);
void LastPos(int *,int,int *);
void MidPos(int*, int , int*, int);

int i;
int main()
{
	int a[50],n,pos,item;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("Enter the element of array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the position & item to insert :\n");
	scanf("%d%d",&pos,&item);
	
	if(pos-1==0)
	FirstPos(a,item,&n);
	else if(pos==n)
	LastPos(a,item,&n);
    if(pos>0&&pos<n)
	MidPos(a,item,&n,pos);
	return 0;
}

void FirstPos(int *a, int item, int *n)
{
	for(i=*n-1;i>=0;i--)
	a[i+1]=a[i];
	a[0]=item;
	
	printf("Array elements are:\n");
	for(i=0;i<=*n;i++)
	printf("%d\n",a[i]);
}

void LastPos(int *a,int item,int *n)
{
	a[*n]=item;
	
	printf("Array elements are:\n");
	for(i=0;i<=*n;i++)
	printf("%d\n",a[i]);
}

void MidPos(int *a, int item, int *n, int pos)
{
	for(i=*n-1;i>pos;i--)
	a[i+1]=a[i];
	a[pos]=item;
	
	printf("Array elements are:\n");
	for(i=0;i<=*n;i++)
	printf("%d\n",a[i]);
}
