#include <stdio.h>

int main()
{
    int i,j,a[3],n;
    printf("Enter the number:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                n=a[i];
                a[i]=a[j];
                a[j]=n;
            }
        }
    }
    printf("sorting array:");
    for(i=0;i<3;i++)
        printf("%d\n",a[i]);

    return 0;
}
