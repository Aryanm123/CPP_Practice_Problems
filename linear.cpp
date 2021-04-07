#include<stdio.h>
int main()
{
	int a[100],n,i,key;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	printf("Enter the element of array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The entered elements are :\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
	printf("Enter the element to search :\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	printf("The location of %d is %d.",key,i);
	else 
	printf("The entered key not found.");
    }
	return 0;
}
