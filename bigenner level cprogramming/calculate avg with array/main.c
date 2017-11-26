#include <stdio.h>
#include <stdlib.h>

int main()
{
     int array[10],i,sum=0;
     float avg;
     printf("Enter number:");
     for(i=0;i<10;i++)
        scanf("%d",&array[i]);
     for(i=0;i<10;i++)
     {
         sum+=array[i];

     }
      printf("total:%d\n",sum);
      avg=sum/10;
      printf("avg:%f\n",avg);
    return 0;
}
