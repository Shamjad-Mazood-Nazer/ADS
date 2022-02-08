#include <stdio.h>
void main()
{
    int i,j,temp,tempmin, max,min;
    max = temp = tempmin = 0;
    int arr[10];
    min = arr[0];
    printf("Enter up to 10 numbers:\n");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = arr;
    for(i=1;i<=10;i++)
    {
      if(max <= *ptr1)
      {
          temp = max;
          max = *ptr1;
          *ptr1 = temp;
      }
        ptr1++;
   }
    printf("MAX=%d\n",max);
    for(j=1;j<=10;j++) {
    if(min >= *ptr2)
    {
        tempmin = *ptr2;
        *ptr2 = min;
        min = tempmin;
    }
    ptr2++;
    }
    printf("MIN=%d\n",min);
    getch();
}
