#include <stdio.h>
int main()
{
    int a[5],b,i,sum=0,c;
    for(i=0;i<5;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
        sum+=i;
    }
    printf("Enter the number to be searched:");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(a[i]==b){
            c=b;
        break;
        }
    }
        if(c=b)
    printf("The number %d appears in the first %d numbers.",c,sum);
    else
        printf("The number %d is not appears in the first %d numbers.",c,sum);
    return 0;
}
