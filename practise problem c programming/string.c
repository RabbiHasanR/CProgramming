#include <stdio.h>
int main()
{
    char ch[100];
    int i=0;

     scanf("%[^\n]",ch);
     //gets(ch);
    printf("%s\n",ch);
         gets(ch);
    printf("%s\n",ch);
         gets(ch);
    printf("%s\n",ch);
    /*while(ch[i]!='\0')
    {
     printf("%c",ch[i]);
     i++;
    }*/
    return 0;
}
