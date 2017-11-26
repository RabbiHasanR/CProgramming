#include <stdio.h>
#include <stdlib.h>

int square(int val)
{
    return(val*val);
}
int main()
{
    int number,result;
    printf("enter number: ");
    scanf("%d",&number);
    result=square(number);
    printf("the square of %d is %d",number,result);

    return 0;
}
