#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter,howmuch;
    counter=0;
    printf("enter howmuch: ");
    scanf("%d",&howmuch);
    while(counter<howmuch)
    {
        counter++;
        printf("\t%d",counter);
    }
    return 0;
}
