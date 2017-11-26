#include <stdio.h>
#include <stdlib.h>

int number(int num);

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    for(;i<10;i++)
        number(array[i]);
    return 0;
}
int number(int num)
{
    printf("%d\n",num);
    return num;
}
