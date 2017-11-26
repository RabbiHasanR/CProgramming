#include <stdio.h>


int main()
{
    int a,num[40],n,j,i;
    printf("Enter number:");
    scanf("%d",&n);
    printf("\nEnter number:");
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
            a=num[i];
            num[i]=num[j];
            num[j]=a;
            }
        }
        printf("shorting array:%d\n",num[i]);
    }

    return 0;
}
