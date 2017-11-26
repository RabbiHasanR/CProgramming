#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        printf("\nnamta for=%d",i);
        //if(i>5)break;
        //if(i==5)continue;
        if(i==5)goto namta5;
        for(j=1;j<=10;j++)
        {
            printf("\n%d*%d=%d\n",i,j,(i*j));
        }
    }
    namta5:
        printf("you have put 5.you don't calculate 5");
    return 0;
}
