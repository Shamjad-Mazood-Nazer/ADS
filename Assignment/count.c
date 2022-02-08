#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the number\n");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("count of digits",count);
}
