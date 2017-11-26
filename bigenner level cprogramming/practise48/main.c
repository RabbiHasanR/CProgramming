#include <stdio.h>
#include <stdlib.h>

int main()
{
    int icount,imarks,itotal=0;
   float avg;
   char choice;
   do
   {
       for(icount=0;icount<3;icount++)
       {
           printf("\nenter test marks: ");
           scanf("%d",&imarks);
           itotal=itotal+imarks;
           printf("%d",itotal);
       }
       avg=itotal/icount;
       printf("\navg:%.2f",avg);
       printf("\ncontinus?");
       scanf("%c",&choice);
   }
   while(choice=='y');
    return 0;
}
