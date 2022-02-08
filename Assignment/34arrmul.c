void main()
{
    int a[10][10],b[10][10],mul[10][10],i,j,m,n;
    printf("Enter the order of matrix : ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of array 1 : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of array 2 : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mul[i][j]=a[i][j]*b[j][i];
        }
    }
    printf("\nThe MUL of Matrices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
