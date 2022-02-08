#include<stdio.h>
int a[10],n,i,pos,val,ch;
void create();
void insert();
void dispaly();
void delete();
void exit();
 void main()
 {
   do
     {
      printf("\n 1.CREATE\n2.INSERT\n3.DISPLAY\n4.DELETE\n5.EXIT");
      printf("\nEnter choice:");
      scanf("%d",&ch);
      switch(ch)
       {
        case 1:create(); break;
        case 2:insert(); break;
        case 3:display();break;
        case 4:delete();break;
        case 5:exit();break;
        default:printf("\n Enter right choice:)");
        }
      }while(ch!=5);
 }

  void create()
   {
     printf("\n Enter number of elements in an array:");
     scanf("%d",&n);
     printf("\n Enter the elements in an array:");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    }
  void insert()
   {
    printf("\n Enter position to enter the element:");
    scanf("%d",&pos);
    printf("\n Enter the value to insert");
    scanf("%d",&val);
    for(i=n-1;i>=pos-1;i--)
      {
        a[i+1]=a[i];
      }
    a[pos-1]=val;
    n=n+1;
    }
  void display()
    {
     printf("\n NUMBERS IN THE ARRAY ARE:");
     for(i=0;i<n;i++)
       {
        printf("\n %d",a[i]);
       }
    }
  void delete()
  {
    if(n!=0)
     {
      printf("\n Enter the position where the element wants to get deleted:");
      scanf("%d",&pos);
      for(i=pos-1;i<n-1;i++)
         {
           a[i]=a[i+1];
         }
      n=n-1;
      }
     else
       printf("\n ARRAY EMPTY:)");
  }
  void exit()
   {
    exit(0);
   }