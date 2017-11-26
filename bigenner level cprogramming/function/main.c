#include <stdio.h>
int main()
{
   int j=0;
   do
   {
      if (j==7)
      {
         j++;
         continue;
      }
      printf("\nvalue of j: %d", j);
      j++;
   }while(j<10);
   return 0;
}
