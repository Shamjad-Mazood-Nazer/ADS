#include<stdio.h>
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
void main()
{
    int n,arr[10];
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the Elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(n, arr);
    getch();
}
