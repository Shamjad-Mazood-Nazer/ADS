#include<stdio.h>
#include<stdlib.h>
void insertbegin();
void insertpos();
void insertend();
void rembegin();
void rempos();
void remend();
void display();
struct Node
{
    int data;
    struct Node *next;
};
/*int *createNode(value)
{
    struct Node *ptr;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=value;
    ptr->next=NULL;
    return ptr;
}*/
struct Node *head;
void main()
{
    int ch;
    do
    {
        printf("\n1.InsertAtBegin\n2.InsertAtPos\n3.insertAtEnd\n4.DeleteAtBegin\n5.DeleteAtPos\n6.DeleteAtEnd\n7.Display\n8.Exit");
        printf("\nEnter your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insertbegin();
            break;

            case 2:
                insertpos();
            break;

            case 3:
                insertend();
            break;

            case 4:
                rembegin();
            break;

            case 5:
                rempos();
            break;

            case 6:
                remend();
            break;

            case 7:
                display();
            break;

            case 8:
                exit(0);
            break;

            default:
            printf("Invalid Choice!");
        }
    }while(ch!=4);
}
void insertbegin()
{
    struct Node *ptr;
    int item;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL)
    {
        printf("Overflow!");
    }
    else
    {
        printf("Insert Element : ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("Element %d Inserted.",item);
    }
}
void insertpos()
{
    int i,loc,item;
    struct Node *ptr,*temp;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL)
    {
        printf("Overflow!");
    }
    else
    {
        printf("Insert Element : ");
        scanf("%d",&item);
        ptr->data=item;
        printf("\nEnter the position : ");
        scanf("%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("\nCan't Insert");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("\nNode Inserted.");
    }
}
void rembegin()
{
    struct Node *ptr;
    if(head==NULL)
    {
        printf("\nList is Empty.");
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining.");
    }
}

void insertend()
{
    struct Node *ptr,*temp;
    int item;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL)
    {
        printf("Overflow!");
    }
    else
    {
        printf("Insert Element : ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("Element %d Inserted.",item);
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("Element %d Inserted.",item);
        }
    }
}
void rempos()
{
    struct Node *ptr1,*ptr;
    int loc,i;
    printf("\nEnter the location where element to be deleted : ");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++)
    {
        ptr1=ptr;
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("\nCan't Delete");
            return;
        }
    }
    ptr1->next=ptr->next;
    free(ptr);
    printf("\nDeleted Node is : %d",loc+1);
}
void remend()
{
    struct Node *ptr,*ptr1;
    if(head==NULL)
    {
        printf("\nList is Empty!");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nOnly Node of the List Removed\n");
    }
    else
    {
        ptr=head;
        while(ptr->next==NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr->next=NULL;
        free(ptr);
        printf("\nDeleted the Last Node.\n");
    }
}
void display()
{
    struct Node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Empty List!.");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("[%d]\n",ptr->data);
            ptr=ptr->next;
        }
    }
}
