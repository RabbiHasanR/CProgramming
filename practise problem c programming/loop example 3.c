///advanced loop///
#include <stdio.h>
int main()
{
    int a,b,sum,n,i,t,j=1;
    //printf("Enter number and stop press a=0 & b=0:");
    /*while(scanf("%d %d",&a,&b)!=EOF)
    {

        if(a==0 && b==0)
            return 0;
        printf("%d\n",sum=a+b);
    }*/
    scanf("%d",&t);///how many time you want loop running///

    while(j<=t /*t--*/){
        scanf("%d",&n);///how many number you want calculat sum///
        /*if(n==0)
        return 0;*/
        sum=0;
             //printf("\nEnter a:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);///input number///
        sum+=a;///calculate sum///
    }
 printf("case#%d:%d\n",j,sum);///print sum///
 j++;
    }

    return 0;
}
