void main()
{
    int a[10],i,n,item,pos=-1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            pos=i;
        }
    }
    if(pos!=-1)
    {
        printf("The item %d is in %d position",item,pos+1);
    }
    else
    {
        printf("The item not found");
    }
}
