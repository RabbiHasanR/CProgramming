///problem:linear searching

///sample input: 6
///              1,5,3,6,4,6
///              5

///              3
///               4,5,9
///               7

///sample output:case1:5
///               case2:no


#include <stdio.h>
int main()
{
    int a[100],n,i,svalue,chak,loc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&svalue);
    chak=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==svalue);
        {
            chak=1;

        }

    }
    if(chak==1)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
