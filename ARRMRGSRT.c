//ARRAY MERGE & SORT
#include<stdio.h>
void main()
{
    int n,m,s,temp,i;
    printf("Enter the limit of Array 1 : ");
    scanf("%d",&n);
    printf("Enter the limit of Array 2 : ");
    scanf("%d",&m);
    s=n+m;
    int a[m],b[n],c[s];
    //Array 1 operation
    printf("\nEnter the elements of array 1 : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSorted Array 1 : ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
        c[i]=a[i];
    }

    //Array 2 operation
    printf("\nEnter the elements of array 2 : ");
    int k=n;
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    for(i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    printf("\nSorted Array 2 : ");
    for(i=0;i<m;i++)
    {
        printf("%4d",b[i]);
    }
    printf("\n\nMERGED ARRAY-1 & ARRAY-2 :-\n");//MERGED ARRAY
    for(i=0;i<s;i++)
    {
        printf("%4d",c[i]);
    }
    for(i=0;i<s;i++)//SORTED ARRAY
    {
        for(int j=i+1;j<s;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nSorted array of Merged is : \n");
    for(i=0;i<s;i++)
    {
        printf("%4d",c[i]);
    }
}
