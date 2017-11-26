#include <stdio.h>
int main()
{
    int i, n,sum=0;

    printf("\nPlease enter number:");
    scanf("%d", &n);

    printf("\n");
    for(i=0;i<n;i++){
       // printf("%d", i);
        sum+=i;
        printf("%d\n",sum);
        }
    printf("total count:%d", i);

   //printf("\n print the numbers from 0 to %d", n-1);
    return 0;
}
