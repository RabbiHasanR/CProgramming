#include <stdio.h>
int main()
{
    int array[20],n,p=0,i,m;
    for(;;)
    {
        for(;;)
        {
            printf("enter some value:\n");
            scanf("%d",&array[p]);
            p++;
            printf("-99 to break:\n");
            scanf("%d",&n);
            if(n==-99)
                break;
        }
        printf("inputed value:\n");
        for(i=0;i<p;i++)
            printf("%d\n",array[i]);
    for(;;)
    {
        printf("enter search value:\n");
        scanf("%d",&m);
        for(i=0;i<p;i++)
        {
            if(array[i]==m)
            {
              printf("value %d foundis location%d",array[i],i);
            break;
            }
            if(i==p)
                printf("valu not found");
        }
            printf("\n-99 to break:\n");
            scanf("%d",&n);
            if(n==-99)
                break;

        }
        printf("\n-99 to break:\n");
            scanf("%d",&n);
            if(n==-99)
                break;
    }



    return 0;
}
