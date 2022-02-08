#include<stdio.h>
void swapp(int ,int)
void main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nValues before swap...\nA = %d\nB = %d"a,b);
    swapp(a,b);
}
void swapp(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nValues after swap...\nA = %d\nB = %d",x,y);
}
