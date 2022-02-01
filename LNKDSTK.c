//LINKED STACK
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
        printf("\n1. PUSH\n2. POP\n3. TRAVERSE\n4. SEARCH\n5. EXIT\n");
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
                printf("Exiting...");
                break;
            default:
                printf("Invalid Choice made!");
        }
    }while(ch!=5);
}
void push ()//PUSH OPERATION
{
    int val;
    struct node *ptr =(struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Unable to push the element into stack!");
    }
    else
    {
        printf("Enter the value : ");
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
        printf("Element %d pushed into Stack.",val);
    }
}
void pop()//POP OPERATION
{
    int item;
    struct node *ptr;
    if(head==NULL)
    {
        printf("Stack is Underflow!");
    }
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("Element %d Popped from Stack.",item);
    }
}
void display()//DISPLAY FUNCTION
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Stack is Empty!.");
    }
    else
    {
        printf("Elements of Stack are : \n");
        while(ptr!=NULL)
        {
            printf("[%d]\n",ptr->val);
            ptr=ptr->next;
        }
    }
}
void search()//SEARCH OPERATION
{
    int item,flag=0;
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Empty Stack, search operation cannot be performed!.");
    }
    else
    {
        printf("Enter the item to search : ");
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
            printf("Element %d not found.",item);
        }
        else
        {
            printf("Element %d found.",item);
        }
    }
}
