#include<stdio.h>
int i;
void LastPos(int *p, int ite, int *s)
{
	p[*s]=ite;
	
	printf("Array elements are:\n");
	for(i=0;i<=*s;i++)
	printf("%d\t",p[i]);
}

int main()
{
	int a[50],n,pos,item,x;
	printf("Enter the size of array : ");
	scanf("%d",&n);
    
    printf("Enter the element of array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the item to insert : \n");
	scanf("%d",&item);
	
	LastPos(a,item,&n);
	return 0;
}
