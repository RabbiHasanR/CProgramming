#include <stdio.h>

int main()
{
    int myarray[3][4],i,j,sum=0;
    float avareg;
    printf("Enter myarray value:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&myarray[i][j]);
            sum+=myarray[i][j];
        }
    }
      printf("value of myarray:");
      printf("\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\n%d",myarray[i][j]);
        }
    }
    printf("\n%d",myarray[2][2]);

    printf("\nsum of my array:%d",sum);
    avareg=sum/12;
    printf("\naverage%.2f",avareg);
    return 0;
}
