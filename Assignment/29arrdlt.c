void main()
{
    int a[20],n,pos,num,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the position where you have to delete a number : ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("\nDeletion is not possible !");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("Resultant array is \n");
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
