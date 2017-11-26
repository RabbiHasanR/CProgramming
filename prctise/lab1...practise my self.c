#include <stdio.h>
int main()
{
    int n,a[100],m=-1,j,i,k=-1,l[100],p;
    printf("Enter the value & stop press -10000:\n");
    for(;;)
    {

        scanf("%d",&n);
        if(n==-10000)
            break;
        else
        {
            m++;
            a[m]=n;
        }
    }
    for(j=0;j<=m;j++)
    {
        printf("%d\t",a[j]);
    }
      printf("Enter the value & stop press -20000:\n");
     for(;;)
    {

        scanf("%d",&p);
        if(p==-20000)
            break;
        else
        {
            k++;
            l[k]=p;
        }
    }
    for(i=0;i<=k;i++)
    {
        printf("%d\t",l[i]);
    }
    return 0;
}
