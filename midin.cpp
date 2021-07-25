#include<stdio.h>
int i;
void MidPos(int *p, int ite, int *s, int po)
{
	for(i=*s-1;i>=0;i--)
	p[i+1]=p[i];
	p[po]=ite;
	
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
	
	printf("Enter the position to insert : \n");
	scanf("%d%d",&pos,&item);
	
	
	
	MidPos(a,item,&n,pos);
	return 0;
}
