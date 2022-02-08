#include<stdio.h>
struct telephone
{
	char name[20],address[20];
	int hno,ph;
}t[3];
void main()
{
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\nEnter the House number : ");
		scanf("%d",&t[i].hno);
		printf("\nEnter the name of Customer : ");
		scanf("%s",&t[i].name);
		printf("\nEnter Phone Number : ");
		scanf("%d",&t[i].ph);
		printf("\nEnter the Address : ");
		scanf("%s",&t[i].address);
	}
	printf("\n\nDetails of Customers : \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		printf("\nName of Customer : %s",t[i].name);
		printf("\nHouse number : %d",t[i].hno);
		printf("\nAddrerss of customer : %s",t[i].address);
		printf("\nPhone Number : %d",t[i].ph);
	}
	getch();
}