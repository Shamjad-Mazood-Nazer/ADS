void main()
{
    char string[20];
    int i,len;
    int flag=0;
    printf("Enter the string : ");
    scanf("%s",string);
    len=strlen(string);
    for(i=0;i<len;i++)
    {
        if(string[i]!=string[len-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s is palindrome",string);
    }
    else
    {
        printf("%s is not a palindrome",string);
    }
}
