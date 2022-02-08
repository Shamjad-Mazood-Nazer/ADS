void main()
{
    int n,odd=0,even=0,esq,osq;
    printf("Enter the n : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
            esq=even*even;
        }
        else
        {
            odd=odd+i;
            osq=odd*odd;
        }
    }
    printf("\nSquare of odd number upto %d is : %d",n,osq);
    printf("\nSquare of even number upto %d is : %d",n,esq);
}
