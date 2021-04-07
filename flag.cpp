#include<stdio.h>
int main()
{
	int a,b,flag=0;
	printf("Enter the series and enter -1 to terminate :\n");
	scanf("%d",&a);
	b=a;
	do
	{
		scanf("%d",&a);
		if(a==b)
		{
			flag=0;
		}
		else
		{
		flag++;
		b=a;
	}
	}while(a!=-1);
	if(flag>=2)
	printf("1");
	else 
	printf("0");
}
