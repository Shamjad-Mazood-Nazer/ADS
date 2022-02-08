#include<stdio.h>
void large(int, int);
void large1(int *, int *);
void main()
{
    int a=10,b=4;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Call by value :- \n");
    large(a,b);
    printf("\nCall by Refrence :- \n");
    large1(&a,&b);
}

void large1(int *p,int *q)
{
if(*p>*q)
printf("largest=%d",*p);
else
printf("largest=%d",*q);
}
void large(int p,int q)
{if(p>q)
printf("largest=%d",p);
else
printf("largest=%d",q);
}



