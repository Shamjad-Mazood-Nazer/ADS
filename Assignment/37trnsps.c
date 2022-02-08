void main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter the order of Matrix : ");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        printf("Enter the elements : \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nTranspose is : \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[i][j]=a[j][i];
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix not equal");
    }
}
