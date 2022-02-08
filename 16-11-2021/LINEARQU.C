#include<stdio.h>
#define max 5
int q[max],front=-1,rear=-1;
int enqueue();
int dequeue();
void show();
void main()
{
	int ch;
	clrscr();
	while(ch!=4)
	{
		printf("\n1->Insert\n2->Delete\n3->Display\n4->Quit");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			 case 1:
				enqueue();
			break;
			case 2:
				dequeue();
			break;
			case 3:
				show();
			break;
			case 4:
				exit(0);
			break;
			default:
				printf("\nInvalid Choice!\n");
		}
	}
}
int enqueue()
{
	int n;
	if(rear==(max-1))
	{
		printf("\nQueue is Full!\n");
	}
	else
	{
		printf("\nEnter the element : ");
		scanf("%d",&n);
		rear=rear+1;
		q[rear]=n;
		if(front==-1)
		{
			front++;
		}
	}
	printf("\n%d is added to the Queue\n",q[rear]);
	return;
}
int dequeue()
{
	int n;
	if(front==-1)
	{
		printf("\nQueue is Empty!\n");
		return 1;
	}
	else
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			n=q[front];
			printf("\n%d is Removed from the Queue\n",q[front]);
			front++;
		}
	}
	return(n);
}
void show()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is Empty!.\n");
		return;
	}
	else
	{
		printf("\nThe Status of Queue is -> ");
		for(i=rear;i>=front;i--)
		{
			printf("[%d]\t",q[i]);
		}
	}
	printf("\n");
}