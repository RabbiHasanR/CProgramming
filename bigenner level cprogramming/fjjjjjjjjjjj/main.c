#include<stdio.h>
int main ()
{
    int i,j;
    for (i=1; i <=3; i++)
    {
        printf("Section: %d", i);
        printf("\n");

    for (j=0; j<5; j++)
    {
        printf("%d \t", i);
    }
    printf("\n");
    }
}
