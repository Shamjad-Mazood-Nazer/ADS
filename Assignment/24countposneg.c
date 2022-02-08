#include<stdio.h>
void main()
{
    int a[5],i,pos,neg;
    printf("Enter the elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;

    }
    printf("\nCount of Positive numbers : %d",pos);
    printf("\nCount of Negative numbers : %d",neg);
}
