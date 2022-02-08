#include<stdio.h>
#include<conio.h>
void main()
{
	int *a[10],i,j,temp,n;
	clrscr();
	printf("\nEnter the limit : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+i;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	printf("\nSorted Array is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\n");
	getch();
}