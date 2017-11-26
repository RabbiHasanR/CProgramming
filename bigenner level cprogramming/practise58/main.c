#include <stdio.h>
#include <stdlib.h>

//nested loop
int main()
{
    int i,j,k=0;
    printf("namta for: ");
    scanf("%d",&i);
    while(i!=0)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,(i*j));
        }
        printf("namta for: ");
        scanf("%d",&i);
        k++;
    }
    printf("total count:%d",k);
    return 0;
}
