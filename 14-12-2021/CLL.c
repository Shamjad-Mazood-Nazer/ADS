#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insbeg();
void inslast();
void delbeg();
void dellast();
void display();
struct node *head;
void main()
{
    int ch;
    do
    {
        printf("\n1. Insert to Begin\n2. Insert to Last\n3. Delete from Begin\n4. Delete from Last\n5. Display\n6. Exit\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insbeg();
                break;

            case 2:
                inslast();
                break;

            case 3:
                delbeg();
                break;

            case 4:
                dellast();
                break;

            case 5:
                display();
                break;

            case 6:
                printf("Exiting...");
                exit(0);

            default:
                printf("Invalid Choice made!");
        }
    }while(ch!=6);
}
void insbeg()
{
    struct node *temp,*ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    int item;
    if(ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Enter the value : ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        printf("New Node [%d] inserted\n",item);
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\nNothing to display.\n");
    }
    else
    {
        printf("Nodes are :\n");
        while(ptr->next!=head)
        {
            printf("-->[%d]",ptr->data);
            ptr=ptr->next;
        }
        printf("-->[%d]-->",ptr->data);
    }
}
void inslast()
{
    int item;
    struct node *temp,*ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Enter the value : ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
        }
        printf("New Node [%d] inserted to last",item);
    }
}
void delbeg()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("Now HEAD is NULL, Nothing to delete!");
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("HEAD Node Deleted\nNow the Circular List with ");
        display();
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        free(head);
        head=temp->next;
        printf("First Node is Deleted\nNow the Circular List with ");
        display();
    }
}
void dellast()
{
    struct node *temp1,*temp2;
    if(head==NULL)
    {
        printf("Now HEAD is NULL, Nothing to delete!");
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("HEAD Node Deleted\nNow the Circular List with ");
        display();
    }
    else
    {
        temp1=head;
        while(temp1->next!=head)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=temp1->next;
        free(temp1);
        printf("First Node is Deleted\nNow the Circular List with ");
        display();
    }
}
