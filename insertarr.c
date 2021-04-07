#include<stdio.h>
void FirstPos(int *p, int ite, int *s);
void LastPos(int *p, int ite, int *s);
void MidPos(int *p, int ite, int *s, int po);

int i;
int main()
{
	int a[50],n,pos,item,x;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("Enter the element of array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the position and item to insert :\n");
	scanf("%d%d\n",&pos,&item);
	
	if(pos==1)
	FirstPos(a,item,&n);
	else if(pos==n)
	LastPos(a,item,&n);
    else if(pos>1&&pos<n)
	MidPos(a,item,&n,pos);
	
	return 0;
}
void FirstPos(int *p, int ite, int *s)
{
	for(i=*s-1;i>=0;i--)
	p[i+1]=p[i];
	p[0]=ite;
	
	printf("Array elements are:\n");
	for(i=0;i<=*s;i++)
	printf("%d",p[i]);
}

void LastPos(int *p,int ite,int *s)
{
	p[*s]=ite;
	
	printf("Array elements are:\n");
	for(i=0;i<=*s;i++)
	printf("%d",p[i]);
}

void MidPos(int *p, int ite, int *s, int po)
{
	for(i=*s-1;i>po;i--)
	p[i+1]=p[i];
	p[po]=ite;
	
	printf("Array elements are:\n");
	for(i=0;i<=*s;i++)
	printf("%d",p[i]);
}
