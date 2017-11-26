#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inumber,isum,icount;
    isum=0;
    icount=0;
    printf("to stop enter-999.enter positive valu: ");
    scanf("%d",&inumber);
    while(inumber!=-999)
    {
        isum+=inumber;
        icount++;
        printf("to stop enter-999.enter positive valu: ");
    scanf("%d",&inumber);

    }
    printf("\nthe sum of%d number is %d",icount,isum);
    return 0;
}
