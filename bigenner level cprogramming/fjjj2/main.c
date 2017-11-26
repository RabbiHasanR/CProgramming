#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<4;i++)
    {
        printf("section %d",i);
        printf("\n");
        for(j=0;j<6;j++)
        {
            printf("\t%d",i);

        }
        printf("\n");

    }
    return 0;
}
