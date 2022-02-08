void main()
{
    int n,i;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        if(i==n)
        {
            goto loop;
        }
    }
    loop:
    {
        for(i=n;i>=0;i--)
        {
            printf("%d\n",i);
        }
    }
}
