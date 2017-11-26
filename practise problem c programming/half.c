#include <stdio.h>
int main()
{
    int count=1,number,i,j;
    scanf("%d",&number);
    for(i=1;i<=number-1;i++)
    {
        for(j=1;j<=count;j++){
            printf(" ");
        }
        count++;
        for(j=1;j<=2*(number-i)-1;j++){
            printf("@");
        }
        printf("\n");
    }

    return 0;
}
