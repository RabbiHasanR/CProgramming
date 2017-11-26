#include <stdio.h>
#include <stdlib.h>

int main()
{
     char grade;
    printf("please type your grade: ");
    scanf("%c,&grade");
    switch(grade)
    {
   case'A':
   case'a':
    printf("excillent your grade");
    break;
   case'B':
   case'b':
    printf("not bad but improve your grade");
    break;

    }

    return 0;
}
