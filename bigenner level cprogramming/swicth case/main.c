#include <stdio.h>
#include <stdlib.h>

int main()
{
   char choice;
   printf("enter choice character");
   scanf("%c",&choice);
   printf("%c\n",choice);
   switch(choice)
   {
   case'A':
   case'a':
    printf("battleship\n");
    break;
   case'B':
   case'b':
    printf("cruiser\n");
    break;
   default:
    printf("kiso na\n");
   }
    return 0;
}
