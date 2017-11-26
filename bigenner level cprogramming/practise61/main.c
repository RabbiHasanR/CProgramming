#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int count_star=0;
    while(count_star<100)
    {
        printf("*");
        count_star+=1;
    }*/
    int x,product,count=0;
    product=x;
    /*printf("enter x: ");
    scanf("%d",&x);*/
    while(count<=1)
    {
         printf("enter x: ");
    scanf("%d",&x);
        printf("%d\n",product);
        product*=x;
        count++;
    }

    return 0;
}
