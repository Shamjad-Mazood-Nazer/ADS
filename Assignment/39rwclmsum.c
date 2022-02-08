void main()
{
    int a[10][10],i,j,r,c,rsum,csum;
    printf("Enter the order of the Matrix : ");
    scanf("%d%d",&r,&c);
    printf("Enter the elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("\nRow sum : %d",rsum);
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        csum=0;
        for(j=0;j<c;j++)
        {
            csum=csum+a[j][i];
        }
        printf("\nColumn sum : %d",csum);
    }
}
