#include<stdio.h>
void main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int fib();
    fib(n);
}
int fib(int n)
{
    int a,b,c,i=1;
    a=0;
    printf("%d\t",a);
    b=1;
    printf("%d\t",b);
    do
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }while(i<n);
}
