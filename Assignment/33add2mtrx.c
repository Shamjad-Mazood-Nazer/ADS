void main()
{
    int a[10][10],b[10][10],s[10][10],i,j,m,n;
    printf("Enter the order of matrix 1 : ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of Matrix 1 :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Matrix 2 :\n");
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
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe SUM of Matrices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}
