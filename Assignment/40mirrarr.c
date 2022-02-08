#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter the order of the matrix : ");
    scanf("%d%d",&r,&c);
    int a[r][r];
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Matrix Elements:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nMirror Image of Matrix:\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=c-1;j>=0;j--)
        {
            printf("%d\t",a[i][j]);
        }
    }
    getch();
}

