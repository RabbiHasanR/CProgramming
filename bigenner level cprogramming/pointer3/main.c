#include <stdio.h>
int main( )
{
   /*Pointer variable*/
   int *p;

   /*Array declaration*/
   int val[7] = { 1,1,1,1,1,1};

   /* Assigning the address of val[0] to pointer: 88820*/
   p = &val[0];



   int i;

   for (  i = 0 ; i <= 6 ; i++ )
   {
       val[i]=2;
      printf("\nval[%d]: value is %d ", i, *p);
      p++;


   }
   return 0;
}
