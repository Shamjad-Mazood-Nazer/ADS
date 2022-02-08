#include<stdio.h>
#define max 10
void main()
{
    int n,m,i,j,k,s1[max],s2[max],s3[max*2],l,len;
    printf("Program to perform the Set operations");
    printf("\nHow many elements for Set-1 : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("\nHow many elements for Set-2 : ");
    scanf("%d",&m);
    printf("Enter elements : ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&s2[i]);
    }
    printf("\nINTERSECTION OF S1 and S2 is : {");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s1[i]==s2[j])
            {
                s3[k]=s1[i];
                k++;
            }
        }
    }
    len=m+n;
    for(i=0;i<k;i++)
        printf("%d, ",s3[i]);
    printf("}");
    l=0;
    printf("\nUNION of S1 and S2 is : {");
    for(i=0;i<n;i++)
    {
        s3[l]=s1[i];
        l++;
    }
    for(j=0;j<m;j++,l++)
    {
        s3[l]=s2[j];
    }

    for(i=0;i<len;i++)
        printf("%d, ",s3[i]);
    printf("}");
}
