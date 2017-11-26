#include <stdio.h>

int main ( void )
{

   FILE *file8;
   char line [ 128 ];
   file8=fopen("file8.txt","r");
   printf("Enter word:");
      scanf(" %[^\n]",line);
   if ( file8 != NULL )
   {
      /* or other suitable maximum line size */
      while ( fgets ( line, sizeof line, file8 ) != NULL ) /* read a line */
      {
         fputs ( line, stdout ); /* write the line */
      }
      fclose ( file8 );
   }
   else
   {
      perror ("file8.txt"); /* why didn't the file open? */
   }
   fclose(file8);
   return 0;
}
