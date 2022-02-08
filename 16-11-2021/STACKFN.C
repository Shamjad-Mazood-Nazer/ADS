#include<stdio.h>
#define max 10
void push();
void pop();
void show();
int i,n,stack[max],top=-1;
void main()
{
	int ch;
	clrscr();
	while(ch!=4)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
			break;
			case 2:
				pop();
			break;
			case 3:
				show();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("\nInvalid Choice!");
		}
	}
}
void push()
{
	if(top==max-1)
	{
		printf("\nStack is Full.");
	}
	else
	{
		printf("\nEnter the element to be inserted : ");
		scanf("%d",&n);
		top=top+1;
		stack[top]=n;
		printf("\nElement %d inserted.\n",n);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is empty.");
	}
	else
	{
		n=stack[top];
		top=top-1;
		printf("\nDeleted element is : %d\n",n);
	}
}
void show()
{
	if(top==-1)
	{
		printf("\nStack is Empty.");
	}
	else
	{       printf("\nElemets are :\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
