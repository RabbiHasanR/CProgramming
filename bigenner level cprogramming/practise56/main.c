#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char ch;
    scanf("%c",&ch);*/
    //ch=toupper(ch);
    //int i=1,sum=0;
    /*printf("enter a & b: ");
    scanf("%d %d",&a,&b);*/
   /* while(ch!='Q')
    {
        printf("enter a & b: ");
    scanf("%d %d",&a,&b);
        sum=a+b;
        printf("\nsum: %d",sum);
        scanf("\n%c",&ch);

    }*/
   /* while(i<=10)
    {
        sum=sum+i;
        //printf("%d",sum);
        i++;
    }
    printf("%d",sum);*/
    char ch;
    int a,b,sum,i=0,total_sum=0;
    scanf("%c",&ch);

    do
    {
        i++;
        //printf("%d",i);
        scanf("\n%d %d",&a,&b);
        sum=a+b;
        printf("\nsum:%d",sum);
        scanf("\n%c",&ch);
        total_sum+=sum;
    }
    while(ch!='Q');
    printf("\n%d",i);
    printf("\n%d",total_sum);


    return 0;
}
