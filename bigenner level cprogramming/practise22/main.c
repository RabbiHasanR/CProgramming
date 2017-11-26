#include <stdio.h>
#include <stdlib.h>
//if condition statement//
int main()
{
    int mark;
    printf("please enter your ur mark: ");
    scanf("%d",&mark);
    if(mark>=40)
        printf("you have passed in the subject.\n");
    if(mark<40)
        printf("you have failed in the subject.\n");
    return 0;
}
