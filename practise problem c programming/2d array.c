#include <stdio.h>

int main()
{
    int myarray [2][2];

    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the valu of myarray[%d][%d]:",i,j);
            scanf("%d",&myarray[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n valu of myarray[%d][%d]:%d",i,j,myarray[i][j]);

        }
    }

    return 0;
}
