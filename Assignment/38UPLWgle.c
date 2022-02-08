void main()
{
    int a[10][10],i,j,r,c;
    printf("Enter the order of the matrix : ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nUpper triangle Matrix : ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
    }
    printf("\nLower triangle Matrix : ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            if(j<=i)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
    }
}
