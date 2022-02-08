void main()
{
    int a[10],i,n,temp,j;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted array : \n");
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
}
