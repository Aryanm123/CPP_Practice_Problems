#include<stdio.h>
void display(int*,int);
int main()
{
	int a[]={1,2,3,4,5};
	display(a,5);
}

void display(int*p,int y)
{
	int i;
	for(i=0;i<y;i++)
	printf("%d\t",i[p]);
}
