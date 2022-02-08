void main()
{
    int a,b,i,flag;
    printf("Enter the start digit : ");
    scanf("%d",&a);
    printf("Enter the end digit : ");
    scanf("%d",&b);
    printf("\nPrime numbers between %d and %d are :\n",a,b);
    while(a<b)
    {
        flag=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d",a);
        ++a;
        printf("\t");
    }
}
