///input:5
///output:sum of 5:15

#include <stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter input:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d\t",i);
        sum+=i;

    }
    printf("\n%d",sum);

    return 0;
}
