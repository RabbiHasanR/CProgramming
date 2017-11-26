#include <stdio.h>

int main()
{
 int i,j,count=1;
 for(i=1;i<=3;i++)
 {
     for(j=1;j<=count;j++){

             printf(" ");
     }
     for(j=1;j<=2*(4-i)-1;j++)
     {
         printf("@");
     }

     count++;

     printf("\n");
 }
 count=3-1;
 for(i=1;i<=2;i++)
 {
     for(j=1;j<=count;j++)
     {
         printf(" ");
     }
    for(j=1;j<=2*i+1;j++)
    {
        printf("@");
    }
    count--;
    printf("\n");
 }


  return 0;
}
