#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j;
    printf("\nEnter First matrix for 3X3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(i=0;i<3;i++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    printf("\nEnter Second matrix for 3X3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(i=0;i<3;i++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    printf("Sum of entered matrices :-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",*(*(c + i) + j) = *(*(a+ i) + j) + *(*(b + i) + j));
    }
    getch();
}
