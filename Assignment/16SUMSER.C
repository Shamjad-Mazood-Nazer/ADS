#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int n)
{
	int i,f=1;
	for(i=0;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void main()
{
	int n,sum=1,i,f,x,p;
	clrscr();
	printf("Enter the value of X and n : ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++)
	{
		f=fact(i);
		p=pow(x,i);
		if(i%2==0)
		{
			sum=sum+(p/f);
		}
		else
		{
			sum=sum-(p/f);
		}
	}
	printf("Sum of the Series is : %d",sum);
	getch();
}