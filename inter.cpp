#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],c[10],n1,n2,i,j,k=0,found;
    printf("Enter the size of first array : ");
    scanf("%d",&n1);

    printf("Enter the element of first array : \n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter the size of second array : ");
    scanf("%d",&n2);

    printf("Enter the element of first array : \n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
    {
           found=0;
        for(j=0;j<n2&&!found;j++)
        {
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                found=1;
            }
        }
    }

    printf("Intersection of two array are : \n");
    for(i=0;i<k;i++)
        printf("%d\t",c[i]);

    return 0;
}

