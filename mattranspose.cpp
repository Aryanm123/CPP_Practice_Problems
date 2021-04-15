#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, i, j, a[10][10], b[10][10];

    printf("Enter the number of rows and column :\n");
    scanf("%d %d", &r, &c);
    
    printf("Enter the element of matrix:");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        scanf("%d", &a[i][j]);

    printf("The entered matrix is :");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        b[j][i] = a[i][j];

    printf("Transpose matrix is :");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");

    return 0;
}

