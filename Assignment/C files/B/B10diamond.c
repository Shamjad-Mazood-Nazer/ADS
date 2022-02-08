#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l,rows;
    printf("|Enter the number of rows");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){    //print upper part
    for(j=1; j<=rows-i; j++){
      printf(" ");//print initial space for upper part
}
for(k=i; k>=1; k--){
      printf("%d",k);
}
for(l=2; l<=i; l++){
      printf("%d",l);
}
printf("\n");//move to next line
}
for(i=rows-1; i>=1; i--){  //print lower part
    for(j=0; j<=rows-1-i; j++){
     printf(" ");//print initial space for lower part
}
for(k=i; k>=1; k--){
      printf("%d",k);
}
for(l=2; l<=i; l++){
      printf("%d",l);
}
printf("\n");//move to next line
        }
    return 0;
}
