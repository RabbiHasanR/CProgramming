#include <stdio.h>
int main()
{
    int avg;
    int sum =0;
    int x=0;

    /* Array- declaration – length 20*/
    int num[10];

    /* for loop for receiving inputs from user and storing it in array*/
    for (x=0; x<=9;x++)
    {
        printf("enter the integer number %d\n", x);
        scanf("%d", &num[x]);
    }
    for (x=0; x<=9;x++)
    {
        sum = sum+num[x];

    }
   printf("the sum is:%d\n",sum);

    avg = sum/10;
    printf("avarage:%d\n", avg);
    return 0;
}
