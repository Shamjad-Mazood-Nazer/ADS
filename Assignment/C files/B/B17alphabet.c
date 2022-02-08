#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}
