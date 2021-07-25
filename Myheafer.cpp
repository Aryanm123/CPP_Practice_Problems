#include<stdio.h>
#include<sum.h>

int main()
{
	int a,b,c;
	printf("Enter the two number :\n");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("Sum is %d",c);
}
