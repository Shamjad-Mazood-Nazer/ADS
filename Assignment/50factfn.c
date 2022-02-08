void fact();
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  fact(n);
}
void fact(int n)
{
    int c,f=1;
    for (c=1;c<=n;c++)
    f=f*c;
    printf("Factorial of %d = %d\n",n,f);
}

