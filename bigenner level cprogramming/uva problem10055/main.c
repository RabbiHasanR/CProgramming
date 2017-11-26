#include <stdio.h>

char disp( char ch);




int main()
{
   int x;
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'I', 'j'};
   for (x=0; x<=10; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (arr[x]);
   }

   return 0;
}

char disp( char ch){

   printf("%c ", ch);
   return ch;
}
