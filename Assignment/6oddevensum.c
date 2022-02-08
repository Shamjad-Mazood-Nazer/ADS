void main()
{
    int n,odd=0,even=0;
    printf("Enter the n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
    }
    printf("\nSum of odd number upto %d is : %d",n,odd);
    printf("\nSum of even number upto %d is : %d",n,even);
}
