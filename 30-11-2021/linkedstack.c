#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void search();
struct node
{
    int val;
    struct node *next;
};
struct node *head;
void main()
{
    int ch;
    do
    {
        printf("1. PUSH\n2. POP\n3. TRAVERSE\n4. SEARCH\n5. EXIT\n");
        printf("Enter the Choice : ");
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
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid Choice made!\n");
        }
    }while(ch!=5);
}
void push ()
{
    int val;
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nUnable to push the element into stack!\n");
    }
    else
    {
        printf("\nEnter the value : ");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
        printf("\nElement %d pushed into Stack.\n",val);
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nStack is Underflow!\n");
    }
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("\nElement %d Popped from Stack.\n",item);
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nStack is Empty!.\n");
    }
    else
    {
        printf("\nElements of Stack are : \n");
        while(ptr!=NULL)
        {
            printf("[%d]\n",ptr->val);
            ptr=ptr->next;
        }
    }
}
void search()
{
    int item,flag=0;
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nEmpty Stack, search operation cannot be performed!.\n");
    }
    else
    {
        printf("\nEnter the item to search : ");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(item==ptr->val)
            {
                flag=1;
                break;
            }
            ptr=ptr->next;
        }
        if(flag==0)
        {
            printf("\nElement %d not found.\n",item);
        }
        else
        {
            printf("\nElement %d found.\n",item);
        }
    }
}
