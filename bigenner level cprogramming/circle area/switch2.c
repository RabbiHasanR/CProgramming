#include <stdio.h>
#include <stdlib.h>

int main()
{
    char(grad);
    printf("please enter ur grade: ");
    scanf("%c",&grad);

    switch(grad)
    {
    case'A':
    case'a':
        printf("exclent result");
        break;
    case'B':
    case'b':
        printf("not bad but improve ur result");
        break;
    case'C':
    case'c':
        printf("not good");
        break;
    case'F':
    case'f':
        printf("ur faill");
        break;
    default:
        printf("r u joking.pleasw enter ur grad");
        break;

    }

}
