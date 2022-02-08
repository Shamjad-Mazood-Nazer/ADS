#include<stdio.h>
struct country
{
	char name[20];
}c[200];
void main()
{
	int i,n;
	clrscr();
	printf("Enter your limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Country name : ");
		scanf("%s",&c[i]);
	}
	printf("\nList of countries you entered :\n");
	for(i=0;i<n;i++)
	{
		printf("\nCountry name %d is : %s",i+1,&c[i]);
	}
	getch();
}