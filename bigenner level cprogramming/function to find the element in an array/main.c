#include <stdio.h>


int main()
{
   int a[30],i,num,smallest;
   printf("enter number of element:\n");
   scanf("%d",&num);
   for(i=0;i<num;i++)
    scanf("%d",&a[i]);

    smallest=a[0];
    for(i=0;i<num;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }

    }
    printf("\%d is smallest number",smallest);

    return 0;
}
