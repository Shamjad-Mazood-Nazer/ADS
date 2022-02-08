// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int i,j,price,n,date;
	char item[10];
	printf("Enter how many items : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the item : ");
		scanf("%s",&item);
		printf("Enter the cash : ");
		scanf("%d",&price);

	}
	for(i=0;i<20;i++)
	{
		printf(" ");
	}
    printf("South indian Bakers\n");

	for(i=0;i<73;i++)
	{
		printf("-");
	}
	printf("\n|Date : 12/11/2021\n|");
    for(i=0;i<n;i++)
    {
	    for(j=0;j<=i;j++)
	    {
		    printf("\n|");
		}
		printf("\n|");
		{

			    printf("|Item \t\t\t: %8s\n",item);
			    printf("|Price \t\t\t: %8d",price);
		}
	}
	printf("\n");
    for(i=0;i<=73;i++)
	{
		printf("-");
	}
    getch();
}