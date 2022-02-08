#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertbegin();
void insertlast();
void delbegin();
void delast();
void display();
void main()
{
    int ch,ch2;
    printf("\n1. insert\n2. delete\n3. Display\n4. Quit\nEnter Your Choice : ");
    scanf("%d",&ch);
    do
    {
        switch(ch)
        {
        case 1:
            printf("1.insert begin\n2. insert last\nSelect what you want to perform : ");
            scanf("%d",&ch2);
            switch(ch2)
            {
            case 1:
                insertbegin();
                break;
            case 2:
                insertlast();
                break;
            default:
                printf("Not a valid choice! Exiting...");
                break;
            }
            break;
        case 2:
            printf("1.delete begin\n2. delete last\nSelect what you want to perform : ");
            scanf("%d",&ch2);
            switch(ch2)
            {
            case 1:
                delbegin();
                break;
            case 2:
                delast();
                break;
            default:
                printf("Not a valid choice! Exiting...");
                break;
            }
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Terminated, Press Enter Key to Quit.");
            break;
        default:
            printf("Invalid Choice! Make a correct option.");
        }
    }while(ch != 4);
}
void insertbegin()
{
    struct node *temp,*ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("Enter the data : ");
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
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        printf("\nNode %d inserted at begining.",item);
    }
}
void insertlast()
{
    int item;
    struct node *temp,*ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\nUnderflow.");
    }
    else
    {
        printf("Enter the data : ");
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
            while(temp!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
        }
        printf("Node %d inserted.",item);
    }
}
