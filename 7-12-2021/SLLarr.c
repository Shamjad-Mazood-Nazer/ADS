#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*ptr,*temp;
void main()
{
    int i,NODES,item;
    printf("Enter how many nodes : ");
    scanf("%d",&NODES);
    for(i=0;i<NODES;i++)
    {
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("OVERFLOW.");
        }
        else
        {
            printf("Enter the Data : ");
            scanf("%d",&item);
            ptr->data=item;
            ptr->next=head;
            head=ptr;
        }
    }
    printf("DATA OF NODES ARE : \n");
    temp=head;
    while(temp!=NULL)
    {
        printf("->[%d]",temp->data);
        temp=temp->next;
    }
}
