#include <stdio.h>
int main()
{
    int a,i,f=1,j;
    printf("Enter a number:");
    for(j=0;j<1;j++)
    {
        scanf("%d",&a);
        if(a>7)
            break;
        else
        {
    for(i=1;i<a+1;i++)
    {
       f*=i;
    }
        }
    }
    printf("%d!=%d",a,f);
    return 0;
}
