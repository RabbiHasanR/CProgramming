#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    printf("enter mark: ");
    scanf("%d",&mark);
    if(mark>=90)
        printf("a+");

else if(mark>=80)
    printf("a");
else
    printf("fail");
    return 0;
}

