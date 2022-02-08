#include<stdio.h>
int main()
{
    int a[10],i,n,ch,item,flag=0,pos;
    clrscr();
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        printf("\n\n1. Insert\n2. Search\n3. Delete\n4. Traversal\n5. Exit \nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                pos=n+1;
                printf("Enter the element to be inserted : ");
                scanf("%d",&item);
                a[pos-1]=item;
                printf("\nElement %d inserted.",item);
                for(i=0;i<=n;i++)
                {
                    printf("%4d",a[i]);
                }
                break;

            case 2:
                printf("\nEnter the element to be searched : ");
                scanf("%d",&item);
                for(i=0;i<n;i++)
                {
                    if(a[i]==item)
                    {
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    printf("\nElement %d found in the array.\n",item);
                }
                else
                {
                    printf("\nElement %d not found",item);
                }
                break;

            case 3:
                printf("Elements are : \n");
                for(i=0;i<n;i++)
                {
                    printf("%4d",a[i]);
                }
                break;

            case 4:
                printf("\nElements are :");
                for(i=0;i<=n;i++)
                    printf("%4d",a[i]);
                break;
            case 5:
                return(0);
            default:
                printf("\nInvalid Choice !");
        }
    }while(ch!=5);
}