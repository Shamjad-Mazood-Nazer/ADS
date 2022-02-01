#include<stdio.h>
#include<stdlib.h>
#define max 5000
int front=-1,rear=-1;
int Q[max];
void enqueue(int);
void dequeue();
void display();
void main()
{
    int ch,x;
    do
    {
        printf("\n1. EnQueue\n2. DeQueue\n3. Display\n4. Exit");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element : ");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!");
        }
    }while(ch!=4);
}
void enqueue(int x)
{
    if((rear+1)%max==front)
    {
        printf("OverFlow!");
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        Q[rear]=x;
    }
    else
    {
        rear=(rear+1)%max;
        Q[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue UnderFlow!");
    }
    else if(front==rear)
    {
        printf("DeQueued element is : %d",Q[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("DeQueued element is : %d",Q[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty!");
    }
    else
    {
        printf("Elements in the Queue are :\n");
        while(i<=rear)
        {
            printf("==>[%d]==>",Q[i]);
            i=(i+1)%max;
        }
    }
}
