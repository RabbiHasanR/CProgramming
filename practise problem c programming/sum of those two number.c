#include <stdio.h>
int main()
{
    int i,j,num1[24],num2[24],k,c[24];
    printf("enter num1:");
    for(i=0;i<24;i++)
    scanf("%d",&num1[i]);

    printf("enter num2:");
    for(j=0;j<24;j++)
        scanf("%d",&num2[j]);

    printf("sum of two number:");
    for(k=0;k<24;k++)
    {
        c[k]=num1[k]+num2[k];
        printf("%d",c[k]);
    }
    return 0;

}
