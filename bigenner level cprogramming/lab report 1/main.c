#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,k=-1;
    printf("enter the value");
    for(;;)
    {
        scanf("%d",&j);
        if(j==-99)
            break;
        else
        {
            k++;
            a[k]=j;
        }
    }
    for(i=0;i<=k;i++){
        printf("%d\n",a[i]);
    }

    printf("enter the value");
    for(;;)
    {
        scanf("%d",&j);
        if(j==-66)
            break;
        else
        {
            k++;
            b[k]=j;
        }
    }
    for(i=0;i<=k;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}
