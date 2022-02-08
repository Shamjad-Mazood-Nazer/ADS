#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int val;
    struct node *next;
};
struct node *head;
void insbeg();
void inslast();
void delbeg();
void dellast();
void display();
void search();
void main()
{
    int ch;
    do
    {
        printf("\n1. Insert in begining\n2. Insert at last\n3. Delete from Beginning\n4. Delete from last\n5. Search\n6. Display\n7. Exit\n");
        printf("\nEnter your choice : \n");
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
                search();
                break;
            case 6:
                display();
                break;
            case 7:
                printf("\nExiting....\n");
                break;
            default:
                printf("Invalid choice!...");
        }
    }while(ch!=7);
}

void insbeg()
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    int item;
    if(ptr==NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&item);
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->val=item;
            head=ptr;
        }
        else
        {
            ptr->val=item;
            ptr->prev=NULL;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
        }
        printf("\nNode %d inserted.",item);
    }
}

void inslast()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nUNDERFLOW...\n");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&item);
        ptr->val=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
        }
    }
    printf("\nNode %d inserted",item);
}

void delbeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW..\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nNode Deleted.");
    }
    else
    {
        ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
        printf("\nNode Deleted.\n");
    }
}

void dellast()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW.\n");
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("\nNode Deleted.\n");
    }
    else
    {
        ptr=head;
        if(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=NULL;
        free(ptr);
        printf("\nNode Deleted.\n");
    }
}

void display()
{
    struct node *ptr;
    printf("\nElements are :\n");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("[%d] <--> ",ptr->val);
        ptr=ptr->next;
    }
}

void search()
{
    struct node *ptr;
    int item,flag=0,i=0;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nEmpty DLL.\n");
    }
    else
    {
        printf("\nEnter the element to search : ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->val==item)
            {
                printf("\nElement %d is found at the position %d",item,i+1);
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
            i++;
            ptr=ptr->next;
        }
        if(flag==0)
        {
            printf("\nElement %d is not found in DLL.\n",item);
        }
    }
}
