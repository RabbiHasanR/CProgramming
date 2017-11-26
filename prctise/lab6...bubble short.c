#include <stdio.h>
int main()
{
    int number[20],a,i,n,j;
    printf("enter number of element:");
    scanf("%d",&a);
    printf("enter number:\n");
    for(i=0;i<a;i++)
        scanf("%d",&number[i]);
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(number[i]>number[j])
            {
                n=number[i];
                number[i]=number[j];
                number[j]=n;
            }
        }
    }
    printf("shortin value:\n");
    for(i=0;i<a;i++)
    {
        printf("%d\t",number[i]);
    }
    return 0;
}
